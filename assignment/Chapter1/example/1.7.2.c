#include <stdio.h>

void func1();
void func2();

int main()
{

    func1();
    printf("3");

    return 0;
}

void func1()
{
    func2();
    printf("2");
}

void func2()
{
    printf("1");
}
