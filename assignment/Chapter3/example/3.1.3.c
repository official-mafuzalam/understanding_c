#include <stdio.h>

int main()
{
    char option;

    printf("My name is MD. Mafuz Alam. My department is ..... \n");
    printf("do you want to read full details? (Y/n) \n");

    option = getchar();

    if (option == 'Y')
    {
        printf("My name is MD. Mafuz Alam. My department is CSE. Intake: 45(DH), Section - 1. \n");
        printf("In this section we are 45 students. \n");
    }
    else
    {
        printf("Thank you");
    }

    return 0;
}
