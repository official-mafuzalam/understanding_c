#include <stdio.h>

void func1();
void func2();

int main()
{
    func1();
    func2();

    return 0;
}

void func1()
{
    printf("The summer soldier, ");
}

void func2()
{
    printf("the sunshine patriot.");
}