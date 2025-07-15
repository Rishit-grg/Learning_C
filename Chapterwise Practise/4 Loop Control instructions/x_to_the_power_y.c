// two numbers x and y are entered through the keyboard right up a wham to find the value of one number raised to the power of another using loops

#include <stdio.h>

int main()
{
    int x, y, result = 1, i;
    printf("enter x and y");
    scanf("%d %d", &x, &y);

    if (y < 0)
    { // 💡💡💡
        printf("Negative exponents are not supported for integer results.\n");
        return 1;
    }
    if (y == 0)
    {
        printf(" %d raised to the power %d is 1", x, y);
    }
    else
    {
        for (i = 1; i <= y; i++)
        {
            result = result * x;
        }
        printf(" %d raised to the power %d is %d", x, y, result);
    }
    return 0;
}
