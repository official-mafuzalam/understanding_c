#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    printf("Choice one from those (1 - for Sum, 2 - for Product): \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Sum of two number is: %d", num1 + num2);
    }
    else if (choice == 2)
    {
        printf("Product of two number is: %d", num1 * num2);
    }
    else
    {
        printf("Invalid choice! \n");
    }

    return 0;
}
