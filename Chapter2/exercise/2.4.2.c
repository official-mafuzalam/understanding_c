#include <stdio.h>

int main()
{
    int number;

    for (number = 17; number <= 100; number++)
    {
        if (number % 17 == 0)
        {
            printf("%d \n", number);
        }
    }

    return 0;
}
