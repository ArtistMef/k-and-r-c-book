/*
================================================================================
    K&R Exercise 1.1 | By Ihor Vitkovskyi | 10.09.2025
================================================================================
    Run the ``hello, world'' program on your system. Experiment with leaving
    out parts of the program, to see what error messages you get.
================================================================================
*/

#include <stdio.h>

int main()
{
    printf("hello, ");
    printf("world");
    printf("\n");

return 0;
}

/*
    #include <stdio.h> - standart input/output library, commands compiler to add it
    main() must always be int, and return some value, cant see that moment in K&R book

    While printf("\n"); is removed the carriage will be placed right after the "world"
    printf("hello, "); without space, the next line will be concatenated
    Each time "\n" is added, the new line starts for the console output data

*/
