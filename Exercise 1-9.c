#include <stdio.h>
#include <stdlib.h>

/*
Exercise 1-9. Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.
*/

int main()
{
    int c, lastc;
    lastc = '0';
    while ((c = getchar()) != EOF){
        if(lastc == ' ' && c == ' '){
            lastc = c;
        }
        else{
            putchar(c);
            lastc = c;
        }


    }
    return(0);
}
