/*
================================================================================
    K&R Exercise 1.18 | By Ihor Vitkovskyi | 16.09.2025
================================================================================
    Write a program to remove trailing blanks and tabs from each line
    of input, and to delete entirely blank lines.
================================================================================
*/

#include "stdio.h"
#include "string.h"

#define MAXLINE 200

/* getline: reads a line and adds it into the arr[], returns length */
int getLine(char arr[], int maxline)
{
    int i;
    int c;

    i = 0;
    while (i < maxline - 1 && (c = getchar()) != EOF && c != '\n')
    {
        arr[i] = c;
        ++i;
    }
    if (c == '\n')
    {
        arr[i] = c;
        ++i;
    }
    arr[i] = '\0';

    return i;
}

/* removeTrailing: removes all spacing after the last non-space character */
void removeTrailing(char line[])
{
    int i;

    i = 0;
    while (line[i] != '\0')
    {
        i++;
    }

    i--;

    if (i >= 0 && line[i] =='\n')
    {
        i--;
    }
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
    {
        i--;
    }
    /* adding new nl and null term */

    line[i + 1] = '\n';
    line[i + 2] = '\0';
}

int main()
{
    int len;
    char currentLine[MAXLINE];

    while((len = getLine(currentLine, MAXLINE)) > 0)
    {
        removeTrailing(currentLine);

        /* checking for an empty line */
        if (currentLine[0] != '\n' && currentLine[0] != '\0')
        {
            printf("%s", currentLine);
        }
    }

    return 0;
}
