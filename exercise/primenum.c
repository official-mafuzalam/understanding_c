#include <stdio.h>

int main()
{
    int num, i, is_prime;

    is_prime = 1;

    printf("Enter a number for test: \n");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        // if (num % i == 0)
        // {
        //     is_prime = 0;
        // }
        printf("%.2f  \n", (float)num/i);
    }

    // if (is_prime == 1)
    // {
    //     printf("%d is a prime number. \n", num);
    // }
    // else
    // {
    //     printf("%d is not a prime number. \n", num);
    // }

    return 0;
}
