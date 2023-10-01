#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter 1st number: \n");
    scanf("%d", &a);

    printf("Enter 2nd number: \n");
    scanf("%d", &b);

    printf("Enter 3rd number: \n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d", a);
    }
    else if (b > c && b > a)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}