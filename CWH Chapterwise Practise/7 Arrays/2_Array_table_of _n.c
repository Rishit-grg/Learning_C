// stores the table of integer input by the user in an array up to 10 digits

#include <stdio.h>

int main()
{
    int n;
    int table_of_5[10];

    printf("This program Enters the table of the number u input into an array \nInput a Number -");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        table_of_5[i] = n * (i + 1);
    }

    // Print To check
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", table_of_5[j]);
    }

    return 0;
}