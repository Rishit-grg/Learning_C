// to determine whether a student has passed or failed to pass a student requires a total of 40% and at least 33% in each subject assume there are three subjects p c and m and take the Marx as input from the user



#include <stdio.h>

int main()
{
    float p, c, m, agg;

    printf("Enter Marks in Physics-");
    scanf("%f", &p);
    
    printf("Enter Marks in Chemistry-");
    scanf("%f", &c);

    printf("Enter Marks in Mathematics-");
    scanf("%f", &m);

    agg = (p+c+m) / 3.0;

    if (p > 33)
    {
        if (c > 33)
        {
            if (m > 33)
            {
                if (agg > 40.00)
                {
                    printf("PASS\n");
                    printf("Aggregate Percentage is %f", agg);
                }
                else
                {
                    printf("FAIL\n");
                    printf("Aggregate Percentage is %f", agg);
                }
            }
            else
            {
                printf("FAIL");
            }
        }
        else
        {
            printf("FAIL");
        }
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}



// ...................................................................// GPT code Waaaaaay better 

//  Improvements Made:
// ✅ Moved agg calculation after input.

// ✅ Simplified the nested if statements into a single condition using logical &&.

// ✅ Used >= instead of > to match your requirement of "at least 33%".

// ✅ Formatted the output to 2 decimal places using %.2f for clarity.




//  #include <stdio.h>

// int main()
// {
//     float p, c, m, agg;

//     // Taking input
//     printf("Enter Marks in Physics: ");
//     scanf("%f", &p);
    
//     printf("Enter Marks in Chemistry: ");
//     scanf("%f", &c);

//     printf("Enter Marks in Mathematics: ");
//     scanf("%f", &m);

//     // Calculate aggregate after input
//     agg = (p + c + m) / 3.0;

//     // Check pass/fail
//     if (p >= 33 && c >= 33 && m >= 33 && agg >= 40)
//     {
//         printf("PASS\n");
//         printf("Aggregate Percentage is %.2f\n", agg);
//     }
//     else
//     {
//         printf("FAIL\n");
//         printf("Aggregate Percentage is %.2f\n", agg);
//     }

//     return 0;
// }
// ...................................................................