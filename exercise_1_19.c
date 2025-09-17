/*
================================================================================
    K&R Exercise 1.19 | By Ihor Vitkovskyi | 17.09.2025
================================================================================
    Write a function reverse(s) that reverses the character string s.
    Use it to write a program that reverses its input a line at a time.
================================================================================
*/

#include "stdio.h"
#include "string.h"
#include "ctype.h"

#define MAXLINE 200

/* getline: reads a line and adds it into the line[], returns length */
int getLine(char line[], int maxline)
{
    int i;
    int c;

    i = 0;
    while ((i < maxline - 1) && (c = getchar()) != EOF && c != '\n')
    {
        line[i] = c;
        i++;
    }
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';

    return i;
}

/* reverseLine:  receiving "string" and its len, and reversing it*/
void reverseLine(char line[], int len)
{
    int i;
    int j;
    int temp;

    i = len;
    j = 0;
    while ((i > 0) && (j < i))
    {
        if (line[i] == '\0' || line[i] == '\n')
        {
            i--;
        }
        else
        {
            temp = line[i]; // using temp var to complete the swap operation
            line[i] = line[j];
            line[j] = temp;
            j++;
            i--;
        }
    }
}

int main()
{
    int len;
    char currentLine[MAXLINE];

    while((len = getLine(currentLine, MAXLINE)) > 0)
    {
        reverseLine(currentLine, len);

        printf("%s\n", currentLine);
    }

    return (0);
}
