#include <stdio.h>

int main()
{
    int num, total, i, j;

    total = 0;

    printf("Enter 1st number: \n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}