// Write a program to print multiplication table of a Given number 

#include <stdio.h>

int main(){
    int n, i;
    printf("Enter no. to write its Multiplication Table - ");
    scanf("%d", &n);

    i=1;
    while (i<=10)
    {
        printf("%d times %d is %d\n", i, n, i*n);i++;
    }
    
    return 0;
}