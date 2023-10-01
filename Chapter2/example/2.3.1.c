#include <stdio.h>

int main()
{
    int number, condition;

    printf("Enter a number: \n");
    scanf("%d", &number);

    printf("Enter 1 for feet to meeter & 2 for meeter to feer. \n");
    scanf("%d", &condition);

    if (condition == 1)
    {
        printf(" %f \n", number / 3.28);
    }
    else
    {
         printf("%f \n", number * 3.28);
    }

    return 0;
}
