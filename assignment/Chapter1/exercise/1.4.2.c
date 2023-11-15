#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter a float number: ");
    scanf("%f", &num1);

    printf("Enter 2nd float number; ");
    scanf("%f", &num2);

    float sum = num1 + num2;

    printf("The sum is %.2f \n", sum);

    return 0;
}
