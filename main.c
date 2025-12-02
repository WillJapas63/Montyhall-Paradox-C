#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int correctDoor(){
    return (rand() % 3) +1;
}

void clearBuffer(){
    int c;
    while ((c = getchar()) !='\n' && c != EOF);
}

int main (){
    int choose;
    int prize = correctDoor();
    int cases;

    printf("Welcome to the game of doors\n");
    printf("Welcome to the game of doors\n");
    printf("Welcome to the game of doors\n");
    printf("Choose an door between 1 and 3\n");
    scanf("%d", &choose);

    if (choose == prize){
        cases = 1;
    }else{
        cases = 2;
    }

    switch (cases){
        case 1: 
        int opened_door;
        int change;
        do {
            opened_door = (rand()%3) + 1;
        }while (opened_door == prize);
        printf ("Great choice, but i want to give you a hint");
        printf ("Behind the door %d have a goat", opened_door);
        printf ("Do you want to change your choice?");
        printf ("Do 1 for YES and 2 for NO");
        scanf("%d", &change);
        if(change == 1){
            printf("You lose, sry");
        }else{
            printf("Congrats, you won the prize!");
        }
    }

    return 0;
}