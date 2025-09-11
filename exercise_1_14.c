/*
================================================================================
    K&R Exercise 1.14 | By Ihor Vitkovskyi | 11.09.2025
================================================================================
    Write a program to print a histogram of the frequencies of
    different characters in its input.
================================================================================
*/

#include <stdio.h>
#include <ctype.h>

#define MAXCHAR 128 /* max amount of different characters (ASCII)*/

/* counts the amount of different characters in the input */
int main()
{
    int c, i;
    int charArr[MAXCHAR];

    for (i = 0; i < MAXCHAR; i++)
    {
        charArr[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c < MAXCHAR)
        {
            ++charArr[c];
        }
    }

/* printing the result as a histogram */
    printf("Histogram of the characters count:\n");

    for (i = 1; i < MAXCHAR; i++)
    {
        if (charArr[i] > 0)
        {
            if (isprint(i))
            {
                printf(" '%c' : ", i);
            }
            else
            {
                printf(" %3d : ", i);
            }

            for (int j = 0; j < charArr[i]; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }
    return (0);
}
