/*
================================================================================
    K&R Exercise 1.13 | By Ihor Vitkovskyi | 11.09.2025
================================================================================
    Write a program to print a histogram of the lengths of words in its
    input. It is easy to draw the histogram with the bars horizontal; a vertical
    orientation is more challenging.
================================================================================
*/

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXLEN 10 /* max length of a word */

/* counts the length of words (up to 10 characters) */
int main()
{
    int c, state, i, j;
    int cCounter;
    int numArr[MAXLEN];

    cCounter = 0;

    for (i = 0; i < MAXLEN; i++)
    {
        numArr[i] = 0;
    }

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                if (cCounter >= 10)
                {
                    numArr[MAXLEN - 1] += 1;
                }
                else
                {
                    numArr[cCounter - 1] += 1;
                }
                state = OUT;
                cCounter = 0;
            }
        }
        else
        {
            state = IN;
            cCounter++;
        }
    }

/* check for the case when the input ends on a char */
    if (state == IN)
    {
        if (cCounter >= 10)
        {
            numArr[MAXLEN - 1]++;
        }
        else
        {
            numArr[cCounter - 1]++;
        }
    }

/* printing the result as a histogram */
    printf("Histogram of the length of words:\n");

    for (j = 0; j < MAXLEN; j++)
    {

        if (j == MAXLEN - 1)
        {
            printf(" %d+ : ", j + 1);
        }
        else
        {
            printf(" %d   : ", j + 1);
        }

        for (int k = 0; k < numArr[j]; k++)
        {
            printf("*");
        }
        printf("\n");

    }
    return (0);
}
