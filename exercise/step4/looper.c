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
    int i = 1;

    printf("My looper program!\n");

    while(i <= 10) {
        printf("i=%d\n", i);
        i = i + 1;
    }
}
