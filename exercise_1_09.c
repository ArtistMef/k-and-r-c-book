/*
================================================================================
    K&R Exercise 1.9 | By Ihor Vitkovskyi | 11.09.2025
================================================================================
    Write a program to copy its input to its output, replacing each string
    of one or more blanks by a single blank
================================================================================
*/

#include <stdio.h>

int main()
{
    int c, blanksCounter;

    blanksCounter = 0;
    while((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            blanksCounter++;
            if (blanksCounter <= 1)
            {
                putchar(c);
            }
        }
        else
        {
            blanksCounter = 0;
            putchar(c);
        }
    }
    return (0);
}
