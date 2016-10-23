#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000
#define PRINTIFLONG 80

/*
Write a program to print all input lines that are longer than 80 characters.
*/

int getline(char line[], int maxline);

int main()
{
    int len;    //current line length
    char line[MAXLINE];     //current input line

    while((len = getline(line, MAXLINE)) > 0)
        if(len > PRINTIFLONG) {
            printf("%s", line);
        }
    return 0;
}

// getline: read a line into s, return length
int getline(char s[], int lim)
{
    int c, i;
    for(i = 0;(c=getchar()) != EOF && c != '\n'; ++i){
        if(i < lim-2)
            s[i] = c;
        else
            if (i < lim-1)
                s[i] = '\n';
    }


    if(c == '\n') {
        if(i < lim-1)
            s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
