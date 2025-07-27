#include <stdio.h>
#include <math.h>

float find_largest(float *arr, int size);
int find_largest_index(float arr[], int size);


int main()
{   
    //                Format: {triangle_number, side1, side2, angle_in_rad}
    float measurments[6][4] = {{1, 137.4, 80.6, 0.78},
                              {2, 155.2, 92.62, 0.89},
                              {3, 149.2, 97.93, 1.35},
                              {4, 160.0, 100.25, 0.90},
                              {5, 155.6, 68.95, 1.25},
                              {6, 149.7, 120.0, 1.75}};
    
    float areas [6];
    for (int i = 0; i < 6; i++)
    {
        areas[i] = 0.5 *measurments[i][1]*measurments[i][2]*sin(measurments[i][3]);
    }
    printf("largest triangle is triangle no %d its area is  %.2f Sq. units",(1+(find_largest_index(areas,6))), find_largest(areas,6));
    return 0;
}

float find_largest(float arr[], int size)
{
    float *ptr = arr;
    float n = *ptr;

    for (int i = 1; i < size; i++)
    {
        ptr++;
        if (*ptr > n)
        {
            n = *ptr;
        }
    }
    return n;
}

int find_largest_index(float arr[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[index]) {
            index = i;
        }
    }
    return index;
}

