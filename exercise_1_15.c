/*
================================================================================
    K&R Exercise 1.15 | By Ihor Vitkovskyi | 12.09.2025
================================================================================
    Rewrite the temperature conversion program of Section 1.2 to
    use a function for conversion.
================================================================================
*/

#include <stdio.h>

/*  prints Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

int toCelsiusConverter(int fahr)
{
    int celsius;
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    while (fahr <= upper)
    {
        celsius = toCelsiusConverter(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

return 0;
}
