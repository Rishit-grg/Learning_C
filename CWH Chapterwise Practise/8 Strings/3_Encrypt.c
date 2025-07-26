#include <stdio.h>
#include <string.h>

void encrypt(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 5;
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    // fgets(str, sizeof(str), stdin);  // Replaced gets() with safer fgets()
    
    encrypt(str);
    printf("The encrypted string is: %s \n", str);

    return 0;
}