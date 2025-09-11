/*
================================================================================
    K&R Exercise 1.4 | By Ihor Vitkovskyi | 10.09.2025
================================================================================
    Write a program to print the corresponding Celsius to Fahrenheit
    table
================================================================================
*/

#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -20; /* lower limit of temperatuire scale */
    upper = 120; /* upper limit */
    step = 20; /* step size */

    printf("  C  |  F\n");
    printf(" ---------\n");

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%6.1f %3.0f \n", celsius, fahr);
        celsius = celsius + step;
    }
    return (0);
}
