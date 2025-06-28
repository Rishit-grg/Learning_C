#include <stdio.h>

int main()
{
    int celcius_temp;
    printf("Input temperature in degree Celcius-");
    scanf("%d", &celcius_temp);

    printf("Temperature is %f degree Farenheit", 1.8 * celcius_temp + 32);
    return 0;
}