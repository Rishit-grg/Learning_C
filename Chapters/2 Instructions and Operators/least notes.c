#include <stdio.h>

int main(){
    int n, n100, n50, n10, n5, n2, n1, r100, r50, r10, r5, r2;
    printf("Enter the Amount to be withdrawn - ");
    scanf("%d",&n);
    n100 = n/100;
    r100 = n%100;
    n50 = r100/50;
    r50 = r100%50;
    n10 = r50/10;
    r10 = r50%10;
    n5 = r10/5;
    r5 = r10%5;
    n2 = r5/2;
    r2 = r5%2;
    n1 = r2;

    printf("Notes will be in the following Deniminations-\n %d notes of Rs100\n %d notes of Rs50\n %d notes of Rs10\n %d coins of Rs5\n %d coins of Rs2\n %d coins of Rs1\n",n100 ,n50 ,n10 ,n5 ,n2 ,n1);
    printf("Total No. of Notes is %d\n", n100+n50+n10);
    printf("Total No. of Coins is %d\n", n5+n2+n1);
    return 0;
}

/*
GPT SUGGESTION - 

You don’t really need to store all r100, r50, r10, etc. — you can just update a single remainder n as you go, Like this - 
#include <stdio.h>

int main() {
    int n, n100, n50, n10, n5, n2, n1;

    printf("Enter the amount: ");
    scanf("%d", &n);

    n100 = n / 100;
    n = n % 100;  // update n

    n50 = n / 50;
    n = n % 50;   // update n

    n10 = n / 10;
    n = n % 10;   // update n

    n5 = n / 5;
    n = n % 5;    // update n

    n2 = n / 2;
    n = n % 2;    // update n

    n1 = n;       // whatever is left is Rs.1

    printf("Notes used:\n");
    printf("%d x Rs100\n", n100);
    printf("%d x Rs50\n", n50);
    printf("%d x Rs10\n", n10);
    printf("%d x Rs5\n", n5);
    printf("%d x Rs2\n", n2);
    printf("%d x Rs1\n", n1);
    
    printf("Total No. of Notes is %d\n", n100+n50+n10);
    printf("Total No. of Coins is %d\n", n5+n2+n1);

    return 0;
}




*/