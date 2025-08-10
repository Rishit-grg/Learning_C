#include <stdio.h>
int validate(char *card_no);
int main()
{
    char card_no[18];
    printf("Enter a 16 digit Card No. to validate - ");
    fgets(card_no, 18, stdin);
    validate(card_no);
    return 0;
}

int validate(char *card_no)
{

    int odd = 0;
    for (int i = 0; i < 16; i += 2)
    {
        if (2*(((int)card_no[i])-48) > 9)
        {
            odd = odd + (2*((int)card_no[i] - 48) - 9);
            //printf("%d\n", odd);
        }
        else
        {
            odd = odd + 2*((int)card_no[i] - 48);
            //printf("%d\n", odd);
        }
    }
    int even = 0;
    for (int i = 1; i < 16; i += 2)
    {
        even = even + ((int)card_no[i] - 48);
        //printf("%d\n", even);
    }

    if ((odd + even) % 10 == 0)
    {
        printf("Card is Valid");
    }
    else
    {
        printf("Card is invalid");
    }
}
