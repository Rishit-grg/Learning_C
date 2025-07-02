// write a program to find the sum of first n natural numbers
#include <stdio.h>

int main()
{
    int sum = 0, i, n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    
        // 💡💡
        // if (scanf("%d", &n) != 1) {
        //     printf("Invalid input. Please enter an integer.\n");
        //     return 1;
        // }
        
        // In C, != 1 means "not equal to 1".

        // it checks if scanf did not successfully read one integer value.
        // If scanf fails (for example, if the user enters a letter instead of a number), it returns a value different from 1, so the condition becomes true and you can handle the invalid input.



    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    
    for (i = 1; i <= n ; i++)
    {
        sum+=i;
    }
    


    printf("Sum of the first %d natural numbers is %d\n", n, sum);
    return 0;
}