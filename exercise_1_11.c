/*
================================================================================
    K&R Exercise 1.11 | By Ihor Vitkovskyi | 11.09.2025
================================================================================
    How would you test the word count program? What kinds of input are most
    likely to uncover bugs if there are any?
================================================================================
*/

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') /* my book had an error here */
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return (0);
}

/*
    How to test?
    Try "" empty input;
    Type only 1 letter - res must be 1 line / 1 word / 2 symbols (incl \n)
    Type 1 word
    Test a few words input
    Test cases without words, just format specifiers, spaces
    Multiple words without spaces and fs
    No input case
*/
