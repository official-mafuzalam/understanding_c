#include <stdio.h>

int main()
{
    int num, i, flag;

    for (num = 1; num <= 100; num++)
    {

        if (num == 1 || num == 2)
        {
            printf("%d \n", num);
        }
        else
        {
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                printf("%d \n", num);
            }
            else
            {
                flag = 0;
            }
        }
    }

    return 0;
}