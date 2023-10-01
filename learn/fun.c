#include <stdio.h>

int numFun(int number);

int main()
{
    int num = 10;

    numFun(num);

    return 0;
}

int numFun(int number)
{
    printf("%d", number);

    return 0;
}
