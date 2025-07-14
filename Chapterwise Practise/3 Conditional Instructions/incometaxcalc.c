//  Calculate income tax paid by an employee to the government as per the tax mentioned below
// 2.5 lakh to 5 lakh gets 5% tax
// 5 lakh to 10 lakh gives 20% tax
// above 10 lakh gives 30% tax

#include <stdio.h>

int main()
{
    float salary, tax;
    printf("Enter user's annual salary - ");
    scanf("%f", &salary);

    if (salary > 1000000)
    {
        tax=(salary-1000000)*0.3 +(500000)*0.2 + (250000)*0.05;
    }
    else if (salary > 500000)
    {
        tax=(salary - 500000) * 0.2 + (250000) * 0.05;
    }
    else if (salary > 250000)
    {
        tax = (salary - 250000) * 0.05;
    }
    else
    {
        tax = 0;
    }

    printf("Total income Tax to be paid is %.2f Rs.\n", tax);

    return 0;
}