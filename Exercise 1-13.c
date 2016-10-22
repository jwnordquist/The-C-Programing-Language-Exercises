#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 32

/*
1-13 Write a program to print a histogram of the lengths of words in its input.
*/

int main()
{

    int i, ii, c, wordLength;
    int totals[MAXLENGTH]  = {0};

    wordLength = i = c = 0;

    while ((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            ++(totals[wordLength]);
            wordLength = 0;
            continue;
        }
        ++wordLength;
    }

    printf("amount of times a word length has been used\n");

    i = 0;

    while(i < MAXLENGTH){
        printf("%d\t| ", i);
        while(totals[i] > 0){
            printf("#");
            --(totals[i]);
        }
        printf("\n");
        i++;
    }

    return 0;
}
