//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
 * Simple lunar lander program.
 * By: Lamber
 * Best landing: Time = 16 seconds, Fuel = 84.0, Velocity = -2.08
 */

int main() {
    double altitude = 100; /* Meters */
    double velocity = 0;   /* Meters per second */
    double fuel = 100;     /* Kilograms */
    double power = 1.5;    /* Acceleration per pound of fuel */
    double g = -1.63;      /* Moon gravity in m/s^2 */
    double burn;           /* Amount of fuel to burn */
    bool valid;            /* Valid data entry flag */
    int time = 0;

    printf("Lunar Lander - (c) 2022, by Lamber\n");

    while (altitude > 0) {
        time += 1;
        printf("Altitude: %.2f\n", altitude);
        printf("Velocity: %.2f\n", velocity);
        printf("You have %.1f kilograms of fuel\n", fuel);

        do {
            valid = false;  /* Assume invalid until we know otherwise */

            printf("How much fuel would you like to burn: ");
            scanf("%lf", &burn);

            if (burn < 0) {
                printf("You can't burn negative fuel\n");
            } else if (burn > 5) {
                printf("You can't burn more than 5 kilograms per second\n");
            } else if (burn > fuel) {
                printf("You can't burn fuel you don't have\n");
            } else {
                printf("Burning %.1f kilograms of fuel\n", burn);
                valid = true;
            }
        }while (!valid);

        velocity = velocity + g + power * burn;

        altitude += velocity;
        fuel -= burn;
    }

    printf("You landed with a velocity of %.2f\n", velocity);
    printf("You spend time %d seconds\n", time);
    printf("You have fuel %.1f\n", fuel);

    if (fabs(velocity) > 3) {
        printf("Your next of kin have been notified\n");
    }
}
