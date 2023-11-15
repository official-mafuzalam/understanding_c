#include <stdio.h>

int main()
{
    int choice, num1, num2;

    printf("1 - for Addition, 2- for Subtraction \n");
    printf("Enter your choice? \n");
    scanf("%d", &choice);

    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);

    if (choice == 1)
    {
        printf("Addition is: %d", num1 + num2);
    }
    else
    {
        printf("Subtraction is: %d", num1 - num2);
    }

    return 0;
}
