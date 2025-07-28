#include <stdio.h>

void ins_sort(int array[]) // Insrtion Sort algo func
{

}


int main()
{
    int array[25] = {11, 94, 27, 62, 8, 39, 71, 4, 86, 19, 58, 21, 36, 97, 1, 44, 70, 13, 60, 33, 25, 80, 6, 92, 17};
    ins_sort(array);

    //Printing 
    for (int i = 0; i < 25; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}





















// SOLUTION ..........................................................................................



// #include <stdio.h>

// #define SIZE 25

// void ins_sort(int array[], int size);

// int main()
// {
//     int array[SIZE] = {11, 94, 27, 62, 8, 39, 71, 4, 86, 19, 
//                        58, 21, 36, 97, 1, 44, 70, 13, 60, 33, 
//                        25, 80, 6, 92, 17};

//     ins_sort(array, SIZE);

//     for (int i = 0; i < SIZE; i++)
//     {
//         printf("%d ", array[i]);
//     }

//     return 0;
// }

// void ins_sort(int array[], int size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int temp = array[i];
//         int j = i - 1;

//         // Shift elements of array[0..i-1], that are greater than temp
//         while (j >= 0 && array[j] > temp)
//         {
//             array[j + 1] = array[j];
//             j--;
//         }

//         array[j + 1] = temp;
//     }
// }
