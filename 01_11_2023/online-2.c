// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int addition(int number1, int number2);
int substraction(int number1, int number2);
int multiplication(int number1, int number2);
float division(int number1, int number2);
int reminder(int number1, int number2);
int square(int number);
int cube(int number);
int exponential(int number, int power);
int inputTaker();
void outputGenerator(float result, bool isFraction);

int main()
{
    printf("Welcome to our Calculator APP\n\n");
    int counter = 0;
    char menu;
    do
    {
        printf("Hit Following Keys For-:\n");
        printf("'a' - addition\n");
        printf("'s' - subtraction\n");
        printf("'m' - multiplication\n");
        printf("'d' - division\n");
        printf("'r' - reminder\n");
        printf("'2' - square\n");
        printf("'c' - cube\n");
        printf("'e' - exponential\n");
        printf("'q' - quit\n");

        if (counter != 0)
        {
            char hudai = getchar();
        }
        menu = getchar();
        char hudai = getchar();

        switch (menu)
        {
        case 'a':
            printf("Enter the two numbers:\n");
            int number1 = inputTaker();
            int number2 = inputTaker();
            int result = addition(number1, number2);
            printf("The addition result of %d and %d is: ", number1, number2);
            outputGenerator((float)result, false);
            break;

        case 's':
            printf("Enter the two numbers:\n");
            number1 = inputTaker();
            number2 = inputTaker();
            result = substraction(number1, number2);
            printf("The substraction result of %d and %d is: ", number1, number2);
            outputGenerator((float)result, false);
            break;

        case 'm':
            printf("Enter the two numbers:\n");
            number1 = inputTaker();
            number2 = inputTaker();
            result = multiplication(number1, number2);
            printf("The multiplication result of %d and %d is: ", number1, number2);
            outputGenerator((float)result, false);
            break;

        case 'd':
            printf("Enter the two numbers:\n");
            number1 = inputTaker();
            number2 = inputTaker();
            float res = division(number1, number2);
            printf("The division result of %d and %d is: ", number1, number2);
            outputGenerator(res, true);
            break;

        case 'r':
            printf("Enter the two numbers:\n");
            number1 = inputTaker();
            number2 = inputTaker();
            result = reminder(number1, number2);
            printf("The reminder result of %d and %d is: ", number1, number2);
            outputGenerator((float)result, false);
            break;

        case '2':
            printf("Enter the number:\n");
            int number = inputTaker();
            result = square(number);
            printf("The square result of %d is: ", number);
            outputGenerator((float)result, false);
            break;

        case 'c':
            printf("Enter the number:\n");
            number = inputTaker();
            result = cube(number);
            printf("The cubic result of %d is: ", number);
            outputGenerator((float)result, false);
            break;

        case 'e':
            printf("Enter the two numbers:\n");
            number1 = inputTaker();
            number2 = inputTaker();
            result = exponential(number1, number2);
            printf("The exponential result of %d and %d is: ", number1, number2);
            outputGenerator((float)result, false);
            break;
        default:
            printf("You have entered wrong input.\n\n");
        }
        counter++;
    } while (menu != 'q');
    printf("Our Calculator APP is going for a sleep\n\n");

    return 0;
}

int addition(int number1, int number2)
{
    return number1 + number2;
}

int substraction(int number1, int number2)
{
    return number1 - number2;
}

int multiplication(int number1, int number2)
{
    return number1 * number2;
}

float division(int number1, int number2)
{
    return (float)number1 / number2;
}

int reminder(int number1, int number2)
{
    return number1 % number2;
}

int square(int number)
{
    return number * number;
}

int cube(int number)
{
    return number * number * number;
}

int exponential(int number, int power)
{
    int result = 1;
    while (power > 0)
    {
        result *= number;
        power--;
    }
    return result;
}

int inputTaker()
{
    int input;
    scanf("%d", &input);
    return input;
}

void outputGenerator(float result, bool isFraction)
{
    if (isFraction)
    {
        printf("%.3f\n\n", result);
    }
    else
    {
        printf("%d\n\n", (int)result);
    }
}
