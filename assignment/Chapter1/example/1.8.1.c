#include <stdio.h>

int get_sqr();

int main()
{
    int sqr;

    sqr = get_sqr();

    printf("Square is: %d", sqr);

    return 0;
}

int get_sqr()
{
    int num, total;

    printf("Enter a number: ");
    scanf("%d", &num);

    total = num * num;

    return total;
}
