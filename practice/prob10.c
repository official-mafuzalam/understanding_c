#include <stdio.h>

int main()
{
    int N, i;
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", N);

    for (i = 0; i < N; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
