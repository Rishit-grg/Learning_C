#include <stdio.h>
#include <string.h>

int custom_strlen(char arr[]);

int main(){

    char user_entered[100];
    printf("Enter a sentence to count characters - ");
    gets(user_entered);
    printf("%d",custom_strlen(user_entered));
    
    return 0;
}

int custom_strlen(char arr[]){
    int i = 0;
    while (arr[i] !='\0')
    {
        i++;
    }
    return i-1;
    
    
}