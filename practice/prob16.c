#include <stdio.h>

int main()
{
    int num, N, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }

    return 0;
}
