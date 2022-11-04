//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>

/*
 * Name : Lamber
 * Program to experiment with arrays
 */

#define NumMovies 10
#define MaxGrosses 5

int main() {
    char *names[NumMovies] = {"Hall Pass", "Unknown", "I Am Number Four", "The King's Speech", "Just Go With It",
                              "Gnomeo and Juliet", "Drive Angry", "Justin Beiber: Never Say Never", "Big Mommas: Like Father, Like Son", "True Grit"};
    double gross[NumMovies] = { 4633070, 3856195, 3171189, 1877685, 3251622, 3156594, 1629735, 2659234, 2028036, 510768 };
    double maxGross[MaxGrosses] = { 500000, 1000000, 2000000, 4000000, 10000000 };
    double sum;
    int i;
    int highestGrossIndex = 0;
    double highestGross = 0;
    int flag = 0;
    for (i = 0; i < NumMovies; i++){
        printf("Movie %2d %33s: %.0f\n", i + 1, names[i], gross[i]);
    }
    // sum = gross[0] + gross[1] + gross[2] + gross[3] + gross[4];
    sum = 0;
    for (i = 0; i < NumMovies; i++){
        sum += gross[i];
    }

    printf("Total gross for these films was $%.0f\n", sum);
    highestGross = 0;
    // for(i = 0; i < NumMovies; i++){
    //      if(gross[i] > highestGross){
    //              highestGrossIndex = i;
    //              highestGross = gross[highestGrossIndex];
    //      }
    // }
    // printf("The highest grossing film is: %s\n", names[highestGrossIndex]);
    int j = 0;
    for (j = 0; j < MaxGrosses; ++j){
        int highestGrossIndex = 0;
        double highestGross = 0;
        int flag = 0;
        for (i = 0; i < NumMovies; i++) {
            if (gross[i] > highestGross && gross[i] < maxGross[j]) {
                flag = 1;
                highestGrossIndex = i;
                highestGross = gross[highestGrossIndex];
            }
        }
        if (flag == 0) {
            printf("No film made less than %.0f\n", maxGross[j]);
        } else {
            printf("The highest gross less than %.0f is %.0f at %s\n", maxGross[j], highestGross,
                   names[highestGrossIndex]);
        }

    }
}