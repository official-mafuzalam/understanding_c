#include <stdio.h>

int main()
{
    int age, gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender (Male - 1, Female - 0): ");
    scanf("%d", &gender);

    // Gender checking
    if (gender == 1)
    {
        if (age >= 21)
        {
            printf("your age is perfect for biye (male) \n");
        }
        else
        {
            printf("Your age is not perfect for biye (male) \n");
        }
    }
    else
    {
        if (age >= 18)
        {
            printf("your age is perfect for biye (female) \n");
        }
        else
        {
            printf("Your age is not perfect for biye (female) \n");
        }
    }

    return 0;
}