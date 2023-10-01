#include <stdio.h>

int main()
{
    int number1, number2, subtraction, sum, multi;

    float division;

    printf("Give me your 1'st number: ");

    scanf("%d", &number1);

    printf("Give me your 2nd number: ");

    scanf("%d", &number2);

    subtraction = number1 - number2;

    sum = number1 + number2;

    multi = number1 * number2;

    division = number1 / number2;

    printf("Your sum is: %d\n", sum);
    printf("Your subtraction: %d\n", subtraction);
    printf("Your multi is: %d\n", multi);
    printf("Your division is: %f\n", division);

    return 0;
}
