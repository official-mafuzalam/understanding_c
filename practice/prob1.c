#include <stdio.h>

int main()
{
    int num;

    printf("Enter 1st number: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
         printf("%d This is an even number \n", num);
    } else
    {
       printf("%d This is an odd number \n", num);
    }

    return 0;
}