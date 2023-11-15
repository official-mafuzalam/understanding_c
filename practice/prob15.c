#include <stdio.h>

int main()
{
    int N, sum = 0, i, num;
    float average;

    printf("Enter how many numbers average calculate: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }

    average = (float)sum / N;

    printf("%.2f \n", average);

    return 0;
}
