// Print multiplication Table of 3 numbers input by user

#include <stdio.h>

int main()
{
    int arr[3][10];
    int p, q, r;
    printf("Enter three numbers to generate their multiplication tables:\n");
    scanf("%d %d %d", &p, &q, &r);
    int arrtwo[3] = {p, q, r};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = arrtwo[i] * (j + 1);
        }
    }

    // Print the array to verify the values
    for (int i = 0; i < 3; i++)
    {
        printf("Table of %d:\n", arrtwo[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", arrtwo[i], j + 1, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}