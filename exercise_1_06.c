/*
================================================================================
    K&R Exercise 1.6 | By Ihor Vitkovskyi | 10.09.2025
================================================================================
    Verify that the expression getchar() != EOF is 0 or 1
================================================================================
*/

#include <stdio.h>

int main()
{
    int c;

    c2 = EOF;

    while (c = (getchar() != EOF))
    {
        printf("Char value: %d\n", c); // 1
    }
    printf("EOF value: %d\n", c);      // 0

    return (0);
}

/*
    So the expression getchar() != EOF is 1 (true) and while c is true, cycle
    continue printing.
*/
