//
// Created by Lamber on 2022/11/9.
//
#include <stdio.h>
#include <string.h>

#include "transistors.h"

void DisplayTransistor(Tran tran){
    printf("Number: %s\n", tran.number);
    switch(tran.type){
        case NPN:
            printf("Type: NPN\n");
            break;
        case PNP:
            printf("Type: PNP\n");
            break;
    }


    printf("pMax: %.3f\n", tran.pmax);
    printf("icMax: %.3f\n", tran.icmax);

}

struct Transistor InputTransistor(){
    struct Transistor t1;

//      strcpy(t1.number, "2N3053");

//      scanf("%s", t1.number);
    InputString(t1.number, sizeof(t1.number));

//      t1.type = NPN;
    t1.caseStyle = T039;
//      t1.pmax = 0.500;  /* 500mw /
//      t1.icmax = 0.700; /* 700ma /

//      printf("Input pMax: ");
//      scanf("%lf", &t1.pmax);
    t1.pmax = InputPositiveValue("Input pMax: ");

//      printf("Input icMax: ");
//      scanf("%lf", &t1.icmax);
    t1.icmax = InputPositiveValue("Input icMax: ");

    t1.type = InputTransistorType("Input type: ");
    return t1;
}

void InputString(char *str, int max){
    char buffer[100];

    /* Get a line of up to 100 characters */
    fgets(buffer, sizeof(buffer), stdin);

    /* Remove any stray newlines from the buffer */
    while (buffer[0] == '\n')
        fgets(buffer, sizeof(buffer), stdin);

    /* Remove any \n we may have input */
    if(strlen(buffer) > 0)
        buffer[strlen(buffer)-1] = '\0';

    /* Copy up to max characters to our string */
    strncpy(str, buffer, max);
    str[max-1] = '\0';
}

double InputPositiveValue(char *prompt)
{
    char buffer[100];
    double value = 0;

    do{
        printf("%s", prompt);

        /* Get a line of up to 100 characters */
        fgets(buffer, sizeof(buffer), stdin);

        /* Remove any \n we may have input */
        if(strlen(buffer) > 0)
            buffer[strlen(buffer)-1] = '\0';

        sscanf(buffer, "%lf", &value);
    } while (value <= 0);
    return value;
}

int InputTransistorType(char *prompt){

    char buffer[100];
    double value = 0;

    do{
        printf("%s", prompt);

        /* Get a line of up to 100 characters */
        fgets(buffer, sizeof(buffer), stdin);

        /* Remove any \n we may have input */
        if(strlen(buffer) > 0)
            buffer[strlen(buffer)-1] = '\0';

        sscanf(buffer, "%lf", &value);

    } while(strcmp(buffer, "PNP") != 0 && strcmp(buffer, "NPN") != 0);

    if (strcmp(buffer, "PNP") == 0){
        return PNP;
    }
    else{
        return NPN;
    }


    return value;
}
