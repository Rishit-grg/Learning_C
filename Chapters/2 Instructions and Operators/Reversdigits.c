#include <stdio.h>

int main(){
    int d1, d2, d3, d4, d5, n, rev;
    printf("Input a 5 Digit No \n");
    scanf("%d",&n);
    d1 = n/10000;
    d2 = (n/1000)%10;
    d3 = (n/100)%10;
    d4 = (n/10)%10;
    d5 = (n)%10;
    rev = d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("The Number with its digits reversed is %d", rev);
    return 0;
}