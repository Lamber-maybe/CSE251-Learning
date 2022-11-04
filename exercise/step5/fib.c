//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
 * Program to compute Fibonacci numbers
 */

int main(){
    int fn1 = 0; /* F(n-1) during the loop */
    int fn2 = 1; /* F(n-2) during the loop */
    int f; /* Computed Fibonacci number */
    int i; /* Loop counter */

    /* Print the first two Fibonacci numbers */
    printf("F(0) = 0\n");

    /* Print 10 Fibonacci numbers */
    for(i = 0; i <= 10; i++){
        f = fn1 + fn2;
        printf("F(%d) = %d\n", i+1, f);

        /* update F(n-1) and F(n-2) */
        fn2 = fn1;
        fn1 = f;
    }


}
