// write a program to find the sum of first n natural numbers
#include <stdio.h>

int main()
{
    int sum = 0, i = 1, n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    
    do
    {
        sum+=i; 
        i++;
    } while (i<=n);
    


    printf("Sum of the first %d natural numbers is %d\n", n, sum);
    return 0;
}