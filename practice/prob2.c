#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        int result, i;
        result = 1;

        for (i = num; i > 1; i--)
        {
            result = result * i;
        }

        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}
