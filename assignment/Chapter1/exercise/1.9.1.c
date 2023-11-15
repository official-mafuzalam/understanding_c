#include <stdio.h>

void outnum(int number);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    outnum(num);

    return 0;
}

void outnum(int number)
{
    printf("Your input number is: %d", number);
}
