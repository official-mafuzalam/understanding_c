#include <stdio.h>

int main()
{
    int answer, count;

    for (count = 1; count < 11; count+1)
    {
        printf("What is %d + %d? \n", count, count);
        scanf("%d", &answer);

        if (answer == count + count)
        {
            printf("Right! \n");
        }
        else
        {
            printf("Sorry, you are wrong! \n");
            printf("Answer is: %d \n", count + count);
        }
    }

    return 0;
}
