// write a program using functions to find average of 3 numbers

#include <stdio.h>

float avg(int a, int b, int c) // average function
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a, b, c;
    printf("Enter three numbers to take average - ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average of the the numbers entered is %.2f", avg(a, b, c));
    return 0;
}