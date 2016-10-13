#include <stdio.h>
#include <stdlib.h>

/*
Exercise 1-8 Write a program to count blanks, tabs, and new lines.
*/

int main()
{
    int c, nl, space, tab;

    nl = 0;
    space = 0;
    tab = 0;
    while ((c = getchar()) != EOF){
        if(c == '\n'){
            ++nl;
        }
        if(c == ' '){
            ++space;
        }
        if(c == '\t'){
            ++tab;
        }
    }
    printf("New lines: %d\nspaces: %d\ntabs: %d", nl, space, tab);
    return(0);
}
