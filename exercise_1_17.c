/*
================================================================================
    K&R Exercise 1.17 | By Ihor Vitkovskyi | 13.09.2025
================================================================================
    Write a program to print all input lines that are longer than 80
    characters. (My addition: And less than 200)
================================================================================
*/

#include "stdio.h"
#include "string.h"

#define MAXSTORAGE 1000
#define MAXLINE 200
#define MINPRINTLINE 80

/* getline: read a line into s, return length */
int getline(char line[], int maxline)
{
    int c, i;
    for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i < maxline - 1)
        {
            line[i] = c;
        }
    }

    if (c =='\n')
    {
        if (i < maxline - 1)
        {
            line[i] = c;
        }
        ++i;
    }

    int term_index = (i < maxline - 1) ? i : (maxline - 1);
    line[term_index] = '\0';

    return i;
}

/*  copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[], int len, int linePosition)
{
    int i;

    i = 0;
    while(i < len)
    {
        to[i + linePosition] = from[i];
        ++i;
    }
}

/*  main: checks for conditions and concatenates all suitable lines
    with '\n' included, then prints them */
int main()
{
    int len;
    int storedLen;
    int linePosition;
    char lines[MAXSTORAGE];
    char currentLine[MAXLINE];

    linePosition = 0;
    while ((len = getline(currentLine, MAXLINE)) > 0)
    {
        if (len > MINPRINTLINE && len <= MAXLINE)
        {
            storedLen = strlen(currentLine);
            // Check if the line will fit in our storage buffer.
            if ((storedLen + linePosition + 1) < MAXSTORAGE)
            {
                // Copy the entire line (which includes the '\n').
                copy(lines, currentLine, storedLen, linePosition);
                linePosition += storedLen;

                // adds '\n' if it is absent
                if (storedLen > 0 && currentLine[storedLen - 1] != '\n')
                {
                    lines[linePosition] = '\n';
                    linePosition++;
                }
            }
        }
    }

    if (linePosition > 0)
    {
        lines[linePosition] = '\0'; // Terminate the final concatenated string
    }

/*  final result printing */
    printf("\nLines between %d and %d chars: \n", MINPRINTLINE, MAXLINE);
    printf("%s", lines);

    return 0;
}
