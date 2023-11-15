#include <stdio.h>

int main()
{
    int num, total, i;

    total = 0;

    printf("Enter 1st number: \n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            total = total + i;
        }
    }

    printf("Total sum is: %d \n", total);

    return 0;
}