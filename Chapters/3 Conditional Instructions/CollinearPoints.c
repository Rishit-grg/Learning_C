// Given three point coordinates in 2d plane write a program to check if the three points fall on one straight line

#include <stdio.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    float m1, m2;
    printf("Enter coordinates of the first point - \n");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of the Second point - \n");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of the Third point - \n");
    scanf("%d %d", &x3, &y3);

    // 💡💡 Check to make sure denominator is not zero....................................
    if ((x1-x2)==0 || (x1-x3)==0) 
    {
        if (x1==x2 && x1==x3)
        {
            printf("Points are collinear");
        }
        else{
            printf("Points are non Collinear");
        }
    }
    // ...............................................................................         
    else
    {
        m1 = (float)(y2 - y1) / (x2 - x1);    //💡💡Float use
        m2 = (float)(y3 - y1) / (x3 - x1);

        if (m1 == m2)
        {
            printf("Points are collinear");
        }
        else
        {
            printf("Points are not collinear");
        }
        return 0;
    }
    

    
}
