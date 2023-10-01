#include <stdio.h>

int main()
{
    int i, num, is_prime;

    is_prime = 1;

    scanf("%d", &num);

    for (i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
        }   
    }

    if (is_prime == 1)
    {
       printf("This is a prime number.\n");
    } else
    { 
       printf("This is not a prime number.\n");
    }


    return 0;
}