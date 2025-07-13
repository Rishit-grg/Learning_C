#include <stdio.h>
#include <math.h>

int divi(int a, int div)
{
    
    if (a % div == 0)
    {
        while (a % div == 0)
        {   a/=div;
            printf("%d ", div);
        }
        return a;
    }
    else
    {
        return a;
    }
}

int main()
{
    int n, i;
    printf("Enter the number to factorise - ");
    scanf("%d", &n);
    printf("prime factors are - \n");
    if (n <= 0) {
        printf("Prime factorization is undefined for non-positive numbers.\n");
        return 1;
    }
    if (n == 1) {
        printf("No prime factors for 1.\n");
        return 0;
    }
    while (n % 2 == 0)
    {
        printf("2 ");
        n /= 2;
    }
    for (i = 3; i <= sqrt(n); i += 2)
    {
        n = divi(n, i);
    }

    if (n > 2)
    {
        printf("%d ", n);
    }

    return 0;
}