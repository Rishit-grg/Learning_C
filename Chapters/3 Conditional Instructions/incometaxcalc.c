//  Calculate income tax paid by an employee to the government as per the tax mentioned below 
// 2.5 lakh to 5 lakh gets 5% tax 
// 5 lakh to 10 lakh gives 20% tax
// above 10 lakh gives 30% tax

#include <stdio.h>

int main(){
    int salary;
    printf("Enter Users annual salary - ");
    scanf("%f", &salary);

    if (salary>1000000)
    {
        printf("Income tax amount to be paid is %f Rs", salary*0.3);
    }
    else if (salary>500000)
    {
        printf("Income tax amount to be paid is %f Rs", salary*0.2);
    }
    else if (salary>250000)
    {
        printf("Income tax amount to be paid is %f Rs", salary*0.05);
    }
    else if (salary<250000)
    {
        printf("Income tax amount to be paid is 0 Rs");
    }
    
    return 0;
}