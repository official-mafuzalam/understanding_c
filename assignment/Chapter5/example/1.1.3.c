#include <stdio.h>

int main()
{
    char mess[10];

    printf("Enter a message less than 80 characters. \n");
    for (int i = 0; i < 10; i++)
    {
        mess[i] = getchar();
        if (mess[i] == '\r')
            break;
    }

    printf("\n");

    for (int i = 0; mess[i] != '\r'; i++)
    {
        printf("%c", mess[i] + 1);
    }

    return 0;
}
