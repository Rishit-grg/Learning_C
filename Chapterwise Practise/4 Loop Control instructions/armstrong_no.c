// Program to print out all Armstrong numbers between one and five hundred Program to print out all Armstrong numbers between 1 and 999

#include <stdio.h>

int main()
{
    int i, o, t, h;

    for (i = 1; i <= 999; i++)
    {
        h = i / 100;
        t = (i / 10) % 10;
        o = (i) % 10;

        if (i == ((h * h * h) + (t * t * t) + (o * o * o)))
        {
            printf("%d ", i);
        }
    }

    return 0;
}