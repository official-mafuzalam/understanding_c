#include <stdio.h>

int main()
{
    int total, i, n;

    total = 0;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            total = total + i;
        }
    }

    printf("%d total: ", total);

    return 0;
}
