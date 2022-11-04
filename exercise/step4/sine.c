//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
 * Simple program to experiment with looping
 * */

int main(){
    double angle;
    int numSteps = 20;
    double maxAngle = M_PI * 2;
    double sinVal;
    int i;
    int k;

    for(i = 0; i <= numSteps; i++) {
        angle = (double)i / (double)numSteps * maxAngle;
        sinVal = sin(angle);
        printf("%3d:  %5.2f ", i, angle);
        for(k = 0; k < 30 + sinVal * 30 ; ++k){
            printf(" ");
        }

        if(k == 0 || k == 60)
            printf("*\n");
        else if(sinVal > sin((double)(i+1)/(double)numSteps * maxAngle)){
            printf("/\n");
        }
        else{
            printf("\\\n");
        }
    }
}
