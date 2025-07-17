// According to Gregorian calendar it was Monday on the date 1st January 2001 one if any year is input through the keyboard write a program to find out what is the day on first January of this year

#include <stdio.h>

int main()
{   int yr, diff, c1, c2, c3, noly, nony, noed, op, lly, n;
    printf("Enter the Year-");
    scanf("%d", &yr);
    
    // diff=year-2001;
    // c1=diff/4;
    // c2=diff/100;
    // c3=diff/400;
    // noly=c1+c3-c2;
    // nony=diff-noly;
    // noed=(1*nony)+(2*noly);
    // op=noed%7;

    lly=yr-((yr-2000)%4);
    n=((lly-2004)/4)+1;
    diff=yr-2001;
    c2=diff/100;
    c3=diff/400;
    noly=n+c3-c2;
    nony=diff-noly;
    noed=(1*nony)+(2*noly);
    op=noed%7;


    switch(op) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }
    return 0;
}