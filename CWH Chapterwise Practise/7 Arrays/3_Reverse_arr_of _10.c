// function that reverses and array[10] passed into it 
#include <stdio.h>

void reverse(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        int m = i, n = 9 - i, temp;

        temp = ptr[m];
        ptr[m] = ptr[n];
        ptr[n] = temp;
    }
}


int main() 
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;   
    reverse(ptr);

// Printing To check

    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", arr[j]);
    }

    return 0;
}
