// Write a program to check whether a given number is prime or not
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 2, isprime = 1, sqrt_n;
    printf("Enter the number to check -");
    scanf("%d", &n);
    sqrt_n = sqrt(n);            //💡💡sqrt is calculated here so it doesnt  have to be carried out in every loop iteration 

    if (n <= 1)
    {
        printf("No. is Not prime");
    }
    else
    {
        // while (i<= sqrt(n)).....💡💡 Efficiency: we calculate sqrt in varibale to make sure it is not calculated in every iteration of the loop 
        while (i <= sqrt_n)     // 💡💡 Efficiency: You only need to check divisors up to sqrt(n), not up to n-1.
        {

            if (n % i == 0)
            {
                isprime = 0; // 💡💡isprime is example of a flag 
                break;
            }
            i++;
        }
        if (isprime)
        {
            printf("No. is prime");
        }
        else
        {
            printf("No. is Not prime");
        }
    }

    return 0;
}