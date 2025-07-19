// A function that circlularly shifts 3 variables entered by the user 
#include <stdio.h>
void circ_shift_3(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main()
{
    int a, b, c;
    printf("Input Values of a, b & c - ");
    scanf("%d %d %d", &a, &b, &c);
    circ_shift_3(&a, &b, &c);
    printf("a=%d, b=%d, c=%d", a, b, c);
    return 0;
}