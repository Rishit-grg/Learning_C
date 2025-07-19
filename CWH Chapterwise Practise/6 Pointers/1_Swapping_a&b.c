// Swapping 2 values input by the user, using a temporary location 
#include <stdio.h>
void swap(int*, int*);
void swap(int *x, int *y) //Swapping Function 
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 33, b = 66;

    swap(&a, &b);

    printf("a is equal to %d, b is equal to %d", a, b);

    return 0;
}