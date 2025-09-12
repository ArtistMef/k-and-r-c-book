/*
================================================================================
    K&R Exercise 1.16 | By Ihor Vitkovskyi | 12.09.2025
================================================================================
    Revise the main routine of the longest-line program so it will
    correctly print the length of arbitrary long input lines, and as much as possible of
    the text.
================================================================================
*/

#include "stdio.h"

#define MAXLINE 10          /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("%s\n", longest);
        printf("Total Symbols: %d", max);
    }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    /* added an ability for the i counter to count until '\0' */
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i < lim - 1)
        {
            s[i] = c;
        }
    }
    if (c == '\n')
    {
        if (i < lim - 1)
        {
            s[i] = c;
        }
        ++i;
    }

    /* adding '\0' at the end of the line */
    int term_index = (i < lim - 1) ? i : (lim - 1);
    s[term_index] = '\0';

    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
