#include <stdio.h>

int tenx(int *i)
{
    return *i * 10;
}

int main()
{
    int a;
    printf("Enter value of x -");
    scanf("%d", &a);
    a = tenx(&a);
    printf("New value of a is %d", a);

    return 0;
}
