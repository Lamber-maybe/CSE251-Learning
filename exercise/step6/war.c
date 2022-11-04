//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
 * Name : Lamber
 * Program to draw playing cards
 */

/* Function declaration */
void PrintCard(int card, int suit);
void PrintResult(int card1, int card2, int suit1, int suit2);

int main(){
    int suit1, suit2;
    int card1, card2;

    /*
     * This seeds the random number
     * generator with the current time
     */

    srand(time(NULL));

    printf("我的回合！抽卡\n");
    /* Create a random card and suit */
    /* This will compute a random number from 0 to 3 */
    suit1 = rand() % 4;

    /* This will compute a random number from 1 to 13 */
    card1 = rand() % 13 + 1;
    printf("Player 1: ");
    PrintCard(card1, suit1);
    printf("\n");

    suit2 = rand() % 4;
    card2 = rand() % 13 + 1;

    printf("Player 2: ");
    PrintCard(card2, suit2);
    printf("\n");

    printf("胜出者：\n");
    PrintResult(card1, card2, suit1, suit2);
    printf("\n");
}

void PrintCard(int card, int suit){
    switch(card){
        case 1:
            printf("Ace");
            break;
        case 11:
            printf("Jack");
            break;
        case 12:
            printf("Queen");
            break;
        case 13:
            printf("King");
            break;
        default:
            printf("%d", card);
            break;
    }

    printf(" of ");

    switch(suit){
        case 0:
            printf("Hearts");
            break;
        case 1:
            printf("Diamonds");
            break;
        case 2:
            printf("Spades");
            break;
        case 3:
            printf("Clubs");
            break;
    }
}

void PrintResult(int card1, int card2, int suit1, int suit2){
    if(card1 > card2){
        printf("Player 1 wins");
    }
    else if(card1 < card2){
        printf("Player 2 wins");
    }
    else{
        if(suit1 > suit2){
            printf("Player 1 wins");
        }
        else if(suit1 < suit2){
            printf("Player 2 wins");
        }
        else{
            printf("There is a tie");
        }
    }
}
