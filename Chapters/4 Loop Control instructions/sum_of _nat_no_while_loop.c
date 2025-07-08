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
        //💡💡
        // return 0; means the program ended successfully.
        // return 1; (or any non-zero value) means the program ended due to an error.


    while (i <= n)
    {
        sum += i;      // 💡💡instead of sum = sum + i
        i++;
    }
    printf("Sum of the first %d natural numbers is %d\n", n, sum);
    return 0;
}