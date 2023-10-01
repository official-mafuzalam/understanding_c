#include <stdio.h>

// "C" program for multiple user define function

// Function prototypes
int additionFunc(int number1, int number2);

int substitutionFunc(int number1, int number2);

int multiplicationFunc(int number1, int number2);

float divisionFunc(int number1, int number2);

void inputFunc(int *number1, int *number2);

void outputFunc(int sum, int sub, int multi, float div);

// Declare global variables for input
int number1, number2;

// Main function

int main()
{
    inputFunc(&number1, &number2);

    int sum = additionFunc(number1, number2);

    int sub = substitutionFunc(number1, number2);

    int multi = multiplicationFunc(number1, number2);

    float div = divisionFunc(number1, number2);

    outputFunc(sum, sub, multi, div);

    return 0;
}

// Arithmetic operation user define function

int additionFunc(int number1, int number2)
{
    int sum = number1 + number2;
    return sum;
}

int substitutionFunc(int number1, int number2)
{
    int sub = number1 - number2;
    return sub;
}

int multiplicationFunc(int number1, int number2)
{
    int multi = number1 * number2;
    return multi;
}

float divisionFunc(int number1, int number2)
{
    float div = (float)number1 / number2;
    return div;
}

// Input function

void inputFunc(int *number1, int *number2)
{
    scanf("%d %d", number1, number2);
    return;
}

//  Output function

void outputFunc(int sum, int sub, int multi, float div)
{
    printf("Sum id: %d\n", sum);
    printf("Sub is: %d\n", sub);
    printf("Multi is: %d\n", multi);
    printf("Div is: %.3f\n", div);
    return;
}