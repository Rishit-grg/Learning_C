// write a program to print all the ascii values and their equivalent characters

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i <= 255; i++)
    {
        printf("%d ____ %c\n", i, i);
    }

    printf("Note that some ASCII values are non-printable control characters");

    return 0;
}