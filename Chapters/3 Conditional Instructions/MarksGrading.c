// Write a program to find grade of a student given his marks

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks obtained by the student- \n");
    scanf("%d", &marks);

    if (marks > 100)
    {
        printf("Marks obtained must be less than 100 ");
    }
    else if (marks > 89)
    {
        printf("Grade A ");
    }
    else if (marks > 79)
    {
        printf("Grade B ");
    }
    else if (marks > 69)
    {
        printf("Grade C ");
    }
    else if (marks > 59)
    {
        printf("Grade D ");
    }
    else if (marks > 49)
    {
        printf("Grade E ");
    }
    else
    {
        printf("Grade F ");
    }

    return 0;
}