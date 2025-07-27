#include <stdio.h>

void modify(int *arr, int size); // func. triples every element of the array

int main()
{
    int arr[25] = {11, 94, 27, 62, 8, 39, 71, 4, 86, 19, 58, 21, 36, 97, 1, 44, 70, 13, 60, 33, 25, 80, 6, 92, 17};
    modify(arr, 25);

    for (int i = 0; i < 25; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void modify(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 3;
    }
}
