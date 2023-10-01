#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Enter first number: \n");
    scanf("%d", &number1);

    printf("Enter second number: \n");
    scanf("%d", &number2);

    if (number2 == 0)
    {
        printf("Number 1 can't divided by Zero \n");
    }
    else
    {
        printf("Answer is: %.3f", (float)number1 / number2);
    }

    return 0;
}
