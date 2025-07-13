// A function to check whether a given year is leap year or not and print the result
#include <stdio.h>
// ..................................................................

void leapyr_check(int yr)
{
    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
    {
        printf(" Leap Year");
    }
    else
    {
        printf(" Not a Leap year");
    }
}

// ................................................................