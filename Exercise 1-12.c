#include <stdio.h>
#include <stdlib.h>

    /*
    Write a program that prints its input one word per line
    */

int main()
{

    int c;

    while ((c = getchar()) != EOF){
        putchar(c);
        if(c == ' ' || c == '\t')
            putchar('\n');
    }

    return 0;
}
