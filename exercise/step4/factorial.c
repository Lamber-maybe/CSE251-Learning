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
    bool valid = false;

    while(!valid){
        int f = 0;
        int fac = 1;

        printf("Number to compute the factorial of: ");
        scanf("%d", &f);

        if(f < 0){
            valid = true;
        }

        printf("%d! = ", f);
        while(f > 0) {
            fac = fac * f;
            f--;
        }
        printf("%d\n", fac);
    }
}
