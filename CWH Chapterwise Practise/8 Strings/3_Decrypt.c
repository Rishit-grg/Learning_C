#include <stdio.h>
#include <string.h>

void decrypt(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] = str[i] - 5;
    }
}

int main()
{
    char str[100];
    printf("Enter the encrypted string to decrypt: ");
    gets(str);
    // fgets(str, sizeof(str), stdin);  // Replaced gets() with safer fgets()

    decrypt(str);
    printf("The decrypted string is: %s \n", str);

    return 0;
}