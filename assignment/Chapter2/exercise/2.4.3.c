#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number for test: \n");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}