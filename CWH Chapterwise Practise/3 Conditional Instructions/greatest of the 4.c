// write a program to find the greatest of four numbers entered by the user

#include <stdio.h>

int main()
{
    int a, b, c, d, m, n;
    printf("Enter 4 different numbers to compare -");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        m = a;
    }
    else
    {
        m = b;
    }

    if (c > d)
    {
        n = c;
    }
    else
    {
        n = d;
    }

    if (m > n)
    {
        printf("Greatest No. is %d", m);
    }
    else
    {
        printf("Greatest No. is %d", n);
    }

    return 0;
}

// 💡💡 GPT IDEA ( quiet good).......................................................

// #include <stdio.h>

// int main() {
//     int a, b, c, d, max;

//     printf("Enter 4 different numbers to compare - ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     max = a;

//     if (b > max)
//         max = b;
//     if (c > max)
//         max = c;
//     if (d > max)
//         max = d;

//     printf("Greatest No. is %d", max);
//     return 0;
// }

// ................................................................................