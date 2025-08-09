#include <stdio.h>
void rev_arr(int *arr, int size);

int main()
{
    int arr[] = {37, 92, 15, 63, 41, 3, 79, 54, 26, 81, 12, 60, 73, 19, 45, 97, 6, 31, 84, 50};

    rev_arr(arr, 20);

    // print array
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void rev_arr(int *arr, int size) // Array Reverse Func

{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
