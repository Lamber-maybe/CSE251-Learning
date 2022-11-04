//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <math.h>

int main(){
    float C, I;  // C means Capacitance, I means Inductance
    double F;    // F means Frequency

    printf("Input Capacitance (microfarads): 4");
    scanf("%f", &C);

    printf("Input Inductance (millihenrys): ");
    scanf("%f", &I);

    F = 1 / (2 * M_PI * sqrt((C * 1e-6) * (I * 1e-3)));
    printf("Resonant Frequency is %.3f", F);
}