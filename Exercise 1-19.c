#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

/*
1-19 Write a function reverse(s) that reverses the character string s, Use it to write a program that verses its input a line at a time.
*/

int getline(char line[], int maxline);
void reverse(char s[]);

int main()
{
    int len;    //current line length
    char line[MAXLINE];     //current input line

    while((len = getline(line, MAXLINE)) > 0){
        reverse(line);
        printf(line);
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

//reverse: reverses s
void reverse(char s[])
{
    int count, i;
    count = i = 0;
    char out[MAXLINE];

    while((out[count] = s[count]) != '\0'){
        ++count;
    }
    --count;
    while((s[i] = out[count]) != '\0' && count != 0){
        --count;
        ++i;
    }
    s[++i] = '\n';
    s[++i] = '\0';
}
