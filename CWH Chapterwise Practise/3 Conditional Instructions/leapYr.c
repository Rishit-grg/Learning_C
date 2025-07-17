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
    
// Or Can use this condition 
// ((year %4==0 && year%100!=0) || year %400==0)
    return 0;
}