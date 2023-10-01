#include <stdio.h>

int main()
{
    char option;
    int num1, num2;

    printf("Choice one of them. What do you want to do: \n");
    printf("Addition, Subtraction, Multiplication, Divide? \n");
    printf("Enter first letter in capital: \n");
    option = getchar();

    printf("Enter 1st number: \n");
    scanf("%d", &num1);
    printf("Enter 1nd number: \n");
    scanf("%d", &num2);

    if (option == 'A')
        printf("%d", num1 + num2);
    if (option == 'S')
        printf("%d", num1 - num2);
    if (option == 'M')
        printf("%d", num1 * num2);
    if (option == 'D')
        printf("%d", num1 / num2);

    else
    {
        printf("Your choice is wrong!");
    }

    return 0;
}
