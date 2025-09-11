/*
================================================================================
    K&R Exercise 1.2 | By Ihor Vitkovskyi | 10.09.2025
================================================================================
    Experiment to find out what happens when prints's argument
    string contains \c, where c is some character not listed above.
================================================================================
*/

#include <stdio.h>

int main()
{
    printf("hello, world\?"); //printed ?
    printf("hello, world\1"); //I got a smile!
    printf("hello, world\c"); //printed c

return 0;
}
