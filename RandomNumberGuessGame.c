// basically this game uses the current time to create a random value(0-x)
// which we will try to guess it later on

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int maxVal = 5;
    srand(time(NULL));
    int randomNumber = rand() % maxVal + 1;

    // printf("%i", randomNumber);

    // lets take input for guess game:
    int input;
    printf("please enter the number you want to guess: ");
    scanf("%i",&input);

    if(randomNumber == input)
    {
        printf("Congratulations youve won!! \n");
        printf("the number you guessed was:%i ",randomNumber);
    }
    else
    {
        printf("You Lost please try again!!");
    }

}
