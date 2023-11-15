#include <stdio.h>

int main()
{
    int sum;

    printf("What is 10 + 23 = ? \n");
    scanf("%d", &sum);

    if (sum == 10 + 23)
    {
        printf("Answer is right \n");
    }
    else
    {
        printf("Answer is wrong \n");
    }

    return 0;
}
