//
// Created by Lamber on 2022/11/9.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "transistors.h"

/*
 * Name : Lamber
 * Description : Simple transistor description example program
 */

int main(){
    int i;
    Tran *trans;
    int numTrans = 0;
    bool flag = true;
    char buffer[100];

    printf("transistors!\n");

    /* Allocate space for one transistor */
    trans = malloc(sizeof(Tran));

    while(1){
        trans[numTrans] = InputTransistor();
        numTrans++;

        printf("Would you like to enter another transistor (Y/N)? \n");

        do{
            fgets(buffer, sizeof(buffer), stdin);
            while(buffer[0] == '\n')
                fgets(buffer, sizeof(buffer), stdin);
            if (strlen(buffer) > 0)
                buffer[strlen(buffer) - 1] = '\0';
            if (strcmp(buffer, "Y") == 0 || strcmp(buffer, "y") == 0)
            {
                trans = realloc(trans, sizeof(Tran) * (numTrans + 1));
            }
            else if (strcmp(buffer, "N") == 0 || strcmp(buffer, "n") == 0)
            {
                flag = false;
                break;
            }
        } while (strcmp(buffer, "Y") != 0 && strcmp(buffer, "N") != 0 && strcmp(buffer, "y") != 0 && strcmp(buffer, "n") != 0);
        if (flag == false)
        {
            break;
        }
    }
    //trans[numTrans-1] = InputTransistor();

    /* Output the transistor */
    printf("\nThe transistors:\n");

    for(i = 0; i < numTrans; i++){
        DisplayTransistor(trans[i]);
    }

    /* Free the memory */
    free(trans);
}
