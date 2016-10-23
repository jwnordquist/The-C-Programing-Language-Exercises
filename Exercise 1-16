#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

/*
Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much as the possible of the text
*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;    //current line length
    int max;    //max length see so far
    char line[MAXLINE];     //current input line
    char longest[MAXLINE];  //longest line saved here

    max = 0;
    while((len = getline(line, MAXLINE)) > 0)
        if (len > max){
            max = len;
            copy(longest, line);
        }
    if (max > 0) //there was a line
        printf("%s%d", longest, max);

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

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
