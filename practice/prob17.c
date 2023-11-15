#include <stdio.h>

int main()
{
    int N, i, sum = 0, num = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            sum = sum + i;
            num = num + 1;
        }
        else if (i % 2 != 0)
        {
            sum = sum + i;
            num = num + 1;
        }
    }

    printf("%f", (float)sum / num);

    return 0;
}
