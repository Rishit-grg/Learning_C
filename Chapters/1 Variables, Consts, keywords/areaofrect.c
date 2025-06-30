#include <stdio.h>

int main()
{
    int length, width;
    printf("Enter length of the rectangle \n");
    scanf("%d", &length);

    printf("Enter width of the rectangle \n");
    scanf("%d", &width);

    printf("area of this rectangle is %d", length * width);
    return 0;
}