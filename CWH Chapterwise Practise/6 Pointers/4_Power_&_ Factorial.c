//function that prints X raiesed to the power y and factorial of x in one go 
#include <stdio.h>
#include <math.h>

void operate(double *power, double *factorial)
{
    int x, y, i;
    printf("Enter X and Y (Both must be Positive integers)-");
    scanf("%d %d", &x, &y);
    *power = (pow((double)x, (double)y));
    *factorial = 1;

    for (i = 1; i <= x; i++)
    {
        (*factorial) *= i;
    }
}

int main()
{
    double power, factorial;

    operate(&power, &factorial);
    printf("X raised to the power Y is - %.2lf\n X! = %.2lf", power, factorial);

    return 0;
}