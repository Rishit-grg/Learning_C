#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, sp;
    printf("3 sides of a triangle are of lenghts - ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    sp = (a + b + c)/2;

    printf("Area of the triangle By Herons formula is %f", sqrt(sp * (sp - a) * (sp - b) * (sp - c)));
    return 0;
}