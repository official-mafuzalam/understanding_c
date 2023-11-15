#include <stdio.h>

int main()
{
    int N, i, sum;
    sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &N);

    for (i = 2; i < N; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
            printf("%d ", i);
        }

        if (i % 5 == 0)
        {
            sum += i;
            printf("%d ", i);
        }
    }

    printf("And sum is: %d ", sum);

    return 0;
}
