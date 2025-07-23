// Counts the number of +ve Numbers in an array[10]

#include <stdio.h>

int count_positive(int *ptr_arr)
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (ptr_arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[10] = {
        -10,
        54,
        15,
        558,
        -669,
        5,
        -47,
        -5,
        69,
        66,
    }; // for example
    int *ptr_arr = arr;
    int n = count_positive(ptr_arr);

    printf(" Array Has %d +ve integers ", n);

    return 0;
}
