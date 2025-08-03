
#include <stdio.h>
int find_odd(int *arr, int size);

int main()
{
    int arr[] = {37, 92, 15, 63, 41, 3, 79, 54, 26, 81, 12, 60, 73, 19, 45, 97, 6, 31, 84, 50};
    printf(" There are %d odd integers in the given array", find_odd(arr, 20));
    return 0;
}

int find_odd(int *arr, int size)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            num++;
        }
    }
    return num;
}