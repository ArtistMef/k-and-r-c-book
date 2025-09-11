/*
================================================================================
    K&R Exercise 1.8 | By Ihor Vitkovskyi | 11.09.2025
================================================================================
    Write a program to count blanks, tabs, and newlines
================================================================================
*/

#include <stdio.h>

int main()
{
    int c, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++newlines;
        }
        if (c == '\t')
        {
            ++tabs;
        }
        if (c == ' ')
        {
            ++blanks;
        }
    }
    printf("Blanks:   %d\n", blanks);
    printf("Tabs:     %d\n", tabs);
    printf("Newlines: %d\n", newlines);

    return (0);
}
