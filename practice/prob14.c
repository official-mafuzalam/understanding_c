#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("This is a leap year \n");
    }
    else
    {
        printf("This is not a leap year \n");
    }

    return 0;
}
