// According to Gregorian calendar it was Monday on the date 1st January 2000 and one if any year is input through the keyboard write a program to find out what is the day on first January of this year

#include <stdio.h>

int main()
{    int year, yearop, result, nol1, nol2, nol3,noly;
    scanf("%d", &year);

    yearop = year - 2000;

    nol1= yearop/4;
    nol2= yearop/100;
    nol3= yearop/400;
    noly= nol1+nol3-nol2;


    result = (1+noly+yearop)%7;

    if (result>0)
    {
        switch (result)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
    }
    
    return 0;
}