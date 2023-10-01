#include <stdio.h>

int main()
{
    int i;
    char j;

    i = 0;

    for (i = 0; i < 101; i++)
        i = j + i;

    printf("Total is: %d", i);

    return 0;
}
