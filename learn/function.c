#include <stdio.h>

// Prototypes
void inputFunc();

void outputFunc(int sum, int sub, int multi, float div);

int addFunc(int number1, int number2);

int subFunc(int number1, int number2);

int multiFunc(int number1, int number2);

float divFunc(int number1, int number2);

// Global variables
int number1, number2, sum, sub, multi;
float div;

// main function
int main()
{
    inputFunc();

    int sum = addFunc(number1, number2);

    int sub = subFunc(number1, number2);

    int multi = multiFunc(number1, number2);

    float div = divFunc(number1, number2);

    outputFunc(sum, sub, multi, div);

    return 0;
}

// User define function
void inputFunc()
{
    printf("Enter 2 number : ");

    scanf("%d %d", &number1, &number2);

    return;
}

int addFunc(int number1, int number2)
{
    sum = number1 + number2;

    return sum;
}

int subFunc(int number1, int number2)
{
    sub = number1 - number2;

    return sub;
}

int multiFunc(int number1, int number2)
{
    multi = number1 * number2;

    return multi;
}

float divFunc(int number1, int number2)
{
    div = (float)number1 / number2;

    return div;
}

void outputFunc(int sum, int sub, int multi, float div)
{
    printf("The sum is:%d, sub is %d , multi is: %d and div is %f \n", sum, sub, multi, div);
    return;
}