// Write a program using recursions to calculate the nth element of Fibonacci sequence

#include <stdio.h>
int Fibonacci_elem(int a)
{
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;
    return Fibonacci_elem(a - 1) + Fibonacci_elem(a - 2);
}
int main()
{
    int n;
    printf("Enter the value of n to get the calculate the nth term of fibonacci sequence - ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Error ! Enter a number greater than 1");
    }
    else
    {
        printf("%dth element of Fibonacci series is %d", n, Fibonacci_elem(n - 1));
    }
    return 0;
}