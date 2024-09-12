//
// Created by 35861 on 24-9-12.
//
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize_random() {
    srand((unsigned)time(NULL));
}
int roll_dice(void) {
    int diceOne = rand() % 6 + 1;
    int diceTwo = rand() % 6 + 1;
    int dice = diceOne + diceTwo;
    return dice;
}


bool play_game(void) {
    int dice = roll_dice();
    printf("You rolled: %d\n", dice);
    if (dice == 7 || dice == 11) {
        printf("You win!\n");
        return true;
    }
    if (dice == 2 || dice == 3 || dice == 12) {
        printf("You lose!\n");
        return false;
    }
    printf("Your point is:%d\n",dice);
    while (true) {
        int point = dice;
         dice=roll_dice();
        printf("Your rolled:%d\n",dice);
        if (dice == 7) {
            printf("you lose!\n");
            return false;
        }
        if (point == dice) {
            printf("you win!\n");
            return true;
        }
    }
}
int main(void) {
    initialize_random();
    char choice;
    int wins=0,losses=0;
    do {
        if (play_game()==true) {
            wins++;
        } else {
            losses=losses+1;
        }
        printf("Play again?");
        scanf(" %c",&choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Wins: %d Losses: %d\n", wins, losses);
    return 0;
}




