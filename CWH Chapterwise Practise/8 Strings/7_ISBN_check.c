#include <stdio.h>
void validate (char *isbn);


int main()
{
    char isbn[12];
    printf("Enter ISBN No. to validate -");
    fgets(isbn, 12, stdin);
    validate (isbn);

    return 0;
}

void validate (char *isbn)
{
    int checker = 0;
    for (int i = 0; i < 10; i++)
    {
        checker = checker + ((int)(isbn[i]-'0')) * (i + 1);
        printf("%d\n", checker);
    }
    if (checker % 11 == 0)
    {
        printf("ISBN code is Valid");
    }
    else
    {
        printf("ISBN code is invalid");
    }
}