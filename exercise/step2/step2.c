//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <math.h>

/*
 * Name : Lamber
 * This is my first CSE 251 program!!!
 */

int main(){
    double radius = 7.88;
    double height = 12.231;
    int wins = 11;
    int losses = 2;
    double volume, diameter, hypot;
    int games;
    double near = 10;
    double far = 22.5;

    double bottleVolume = 1700;  /* Milliliters */
    double cupVolume = 350;      /* Milliliters */
    int numCups;

    printf("My first C program\n");
    printf("Aren't you impressed?\n");
    printf("The cylinder has a radius of %5.2f and a height of %8.1f\n", radius, height);

    printf("MSU had an %d-%d season in 2010!\n", wins, losses);
    volume = radius * radius * M_PI * height;
    printf("The volume is: %f\n", volume);

    games = wins + losses;
    printf("The number of games is %d\n", games);

    hypot = sqrt(near * near + far * far);
    printf("hypot is %f\n", hypot);

    numCups = (int)(bottleVolume / cupVolume);
    printf("Number of cups: %d\n", numCups);
}