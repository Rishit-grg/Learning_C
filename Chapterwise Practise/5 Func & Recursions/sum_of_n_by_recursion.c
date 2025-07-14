// write a recursive function to calculate the sum of first n natural numbers

#include <stdio.h>
//.......................................Reqd. Func
int Sum_of_n(int a)
{
    if (a > 1)
    {
        return a + Sum_of_n(a - 1);
    }
    else if (a == 0)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}
//......................................

int main()
{
    int n;
    printf("Enter n - ");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("The sum of first %d natural numbers is %d", n, Sum_of_n(n));
        return 0;
    }
    else
    {
        printf("ERROR ! Please enter a positive integer ");
        return 1;
    }
    return 0;
}