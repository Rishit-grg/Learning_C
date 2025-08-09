#include <stdio.h>
#include <string.h>

int my_strlen(char str[])
{

    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    printf("The length of the string is: %d", (my_strlen(str)));

    return 0;
}