//Guess Number
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    //initialize Random number generator
    srand(time(0));

    //Generate random Number between 1 and 100
    int random_Number=(rand() % 100)+1;
    int no_of_guesses=0;
    int guessed_Number;

    do{
        printf("guess the Number : ");
        scanf("%d",&guessed_Number);

        if(guessed_Number>random_Number){
            printf("Lower Number Please!\n");
        }
        else if(guessed_Number<random_Number){
            printf("higher Number please!\n");
        }
        no_of_guesses++;
    }
    while(guessed_Number!=random_Number);
    printf("You guessed the Number in %d guesses",no_of_guesses);
    return 0;
}