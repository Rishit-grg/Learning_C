// write a program to using pointer to find the smallest no in an array of 25

#include <stdio.h>
int find_smallest(int *arr, int size)
{
    int *ptr = arr;
    int n = *ptr;                // n is the smallest no

    for (int i = 1; i < size; i++)
    {
        ptr++;
        if (*ptr < n)
        {
            n = *ptr;
        }
    }
    return n;
}

int main()
{
    int arr[25] = {11, 94, 27, 62, 8, 39, 71, 4, 86, 19, 58, 21, 36, 97, 1, 44, 70, 13, 60, 33, 25, 80, 6, 92, 17};
    int s = find_smallest(arr, 25);
    printf("Smallest no in the array is %d", s);
    return 0;
}