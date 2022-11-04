//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float C, I;  // C means Capacitance, I means Inductance
    double F;    // F means Frequency
    bool valid = true;

    printf("Input Capacitance (microfarads): ");
    scanf("%f", &C);

    printf("Input Inductance (millihenrys): ");
    scanf("%f", &I);


    /* Test to see if the user entered an invalid value */
    if(I < 0){
        printf("You moron, you entered a negative inductance!\n");
        valid = false;
    }
    else if(I == 0){
        printf("You are really dumb, you entered zero. \n");
        valid = false;
    }
    else if(C <= 0){
        C = 1;
        printf("you moron, you entered a negative capacitance!\n");
    }
    else
        printf("Okay, I guess that's reasonable\n");

    if(valid) {
        F = 1 / (2 * M_PI * sqrt((C * 1e-6) * (I * 1e-3)));
        printf("Resonant Frequency is %.3f\n", F);

        if(F > 20 && F < 20000)
            printf("This frequency is one I can hear!\n");
    }
}
