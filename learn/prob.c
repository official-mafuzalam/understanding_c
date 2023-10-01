#include <stdio.h>

int main()
{
    int i;

    for (i = 17; i <= 100; i++)
    {
        int num = i % 17;

        if (num == 0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
