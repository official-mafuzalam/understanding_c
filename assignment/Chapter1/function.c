#include <stdio.h>

int addFunc(int number1, int number2);

int subFunc(int number1, int number2);

int multiFunc(int number1, int number2);

float divFunc(int number1, int number2);

void inputFunc();

void outputFunct(int sum, int sub, int multi, float div);

int number1, number2, sum, sub, multi;

float div;

int main()
{
    inputFunc();

    int sum = addFunc(number1, number2);

    int sub = subFunc(number1, number2);

    int multi = multiFunc(number1, number2);

    float div = divFunc(number1, number2);

    outputFunct(sum, sub, multi, div);

    return 0;
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
    div = number1 / (float)number2;
    return div;
}

void inputFunc()
{
    scanf("%d", &number1);
    scanf("%d", &number2);

    return;
}

void outputFunct(int sum, int sub, int multi, float div)
{
    printf("%d \n", sum);
    printf("%d \n", sub);
    printf("%d \n", multi);
    printf("%f \n", div);
}