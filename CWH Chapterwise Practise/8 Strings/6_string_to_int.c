#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int str_to_int(char *num, int length);

int main()
{
    char num[20];
    printf("Enter a Number - ");
    fgets(num, 20, stdin);
    int l = strlen(num) - 1;
    // When you type a number and hit Enter, fgets() stores the \n character at the end.
    // Example: If you type "123", num actually holds "123\n\0".
    // This messes up your length calculation and your loop.
    printf("strlen - %d \n", l);

    printf("%d", str_to_int(num, l));

    return 0;
}

int str_to_int(char *num, int length)
{
    int number = 0;
    // printf("%d\n", number);
    for (int i = 1; i <= length; i++)
    {
        if (i == 1)
        {
            number = (int)num[length - i] - 48;
            // printf("%d\n", number);
        }
        else if (i > 1 && i < length)
        {
            number = number + ((int)(num[length - i] - 48) * (int)(round(pow(10, i - 1)))); // round bc pow() can return float !!!!!!
            // printf("%d\n", number);
        }
        else if (i == length)
        {
            number = number + ((int)(num[0] - 48) * (int)(round(pow(10, i - 1))));
        }
    }
    return number;
}

// // Chatgpt approach..................... Simpler
// int str_to_int(char *num, int length)
// {
//     int number = 0;
//     int place = 1;

//     for (int i = 1; i <= length; i++)
//     {
//         number += (num[length - i] - '0') * place;
//         place *= 10;
//     }
//     return number;
// }