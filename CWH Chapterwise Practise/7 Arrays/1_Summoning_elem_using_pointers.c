#include <stdio.h>

int main()
{
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = &arr;

    printf("Element 0 is %d\n", *ptr);

    printf("Element 3 is %d", *ptr += 3);

    return 0;
}