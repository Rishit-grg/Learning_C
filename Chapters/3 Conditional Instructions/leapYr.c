#include <stdio.h>

int main()
{
    int yr;

    printf("Enter Year -");
    scanf("%d", &yr);

    if (yr % 4==0)
    {
        if (yr%100==0)
        {
             if (yr%400==0)
             {
                printf("Leap Year");
             }
             else
             {
                printf(" Not a Leap Year");
             }
             
        }
        else
        {
            printf("Leap Year");
        }
        
    }
    else
    {
        printf("Not a leap Year");
    }

    return 0;
}