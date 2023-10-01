#include <stdio.h>

int main()
{
    int num, carry;

    printf("Enter a number: \n");
    scanf("%d", &num);

    carry = num % 2;

    if (carry == 0)
        printf("This is even number. \n");
    if (carry == 1)
        printf("This is odd number. \n");

    return 0;
}
