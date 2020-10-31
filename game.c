#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, guess, nguess=1;
    srand(time(0));
    num = rand()%100 + 1;
    // printf("the number is %d\n", num);
    printf("the number is %d\n", time(0));

    do{
        printf("Guess the no bw 1 to 100\n");
        scanf("%d", &guess);
        if(num>guess){
            printf("Higher no please\n");
        }
        else if(guess>num){
            printf("Lower no please\n");

        }
        else{
            printf("you guessed it in %d attempts\n", nguess);
        }
        nguess++;
    }
    while(guess!=num);
    return 0;
    }
    