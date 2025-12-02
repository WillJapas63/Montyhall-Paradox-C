#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int correctDoor(){
    return (rand() % 3) +1;
}
void clearBuffer();
void text(int opened_door);

int main (){
    srand(time(NULL));

    int choose;
    int prize = correctDoor();
    int cases;
    int opened_door;
    int change;

    printf("Welcome to the game of doors\n");
    printf("Choose an door between 1 and 3\n");
    scanf("%d", &choose);
    clearBuffer();

    if (choose == prize){
        cases = 1;
    }else{
        cases = 2;
    }

    switch (cases){
        case 1: 
  
        do {
            opened_door = (rand()%3) + 1;
        }while (opened_door == prize);
        text(opened_door);
        scanf("%d", &change);
        if(change == 1){
            printf("You lose, sry");
        }else{
            printf("Congrats, you won the prize!");
        }
        break;



        case 2:
        do {
            opened_door = (rand()%3)+1;
        }while (opened_door == prize || opened_door == choose);
        text(opened_door);
        scanf("%d", &change);
        if(change == 1){
            printf("You win the prize!");
        }else{
            printf("Sry, try again in the next time!");
        }
    }

    return 0;
}


void clearBuffer(){
    int c;
    while ((c = getchar()) !='\n' && c != EOF);
}

void text(int opened_door){
    printf ("Great choice, but i want to give you a hint\n");
    printf ("Behind the door %d have a goat\n", opened_door);
    printf ("Do you want to change your choice?\n");
    printf ("Do 1 for YES and 2 for NO\n");
}