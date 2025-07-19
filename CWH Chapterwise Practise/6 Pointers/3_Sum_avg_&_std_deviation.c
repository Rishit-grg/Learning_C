// receives 5 integers and returns the sum, average, and standard deviation

#include <stdio.h>
#include <math.h>

void stats(int *sum, float *avg, float *stdev)
{
    int a, b, c, d, e;
    printf("Input 5 numbers - ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    *sum = a + b + c + d + e;
    *avg = (*sum) / 5.0;
    *stdev = sqrt((pow(a - *avg, 2) + pow(b - *avg, 2) + pow(c - *avg, 2) + pow(d - *avg, 2) + pow(e - *avg, 2)) / 5.0f);
}

int main()
{
    int sum;
    float avg, stdev;
    stats(&sum, &avg, &stdev);

    printf(" Sum- %d \n Average - %.2f\n Std. Deviation- %.2f ", sum, avg, stdev);

    return 0;
}