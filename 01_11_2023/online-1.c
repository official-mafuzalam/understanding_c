// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Loop: Initialization, Condition, Modification

    printf("Printed Through For Loop:\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d", i);
        if (i != 10)
        {
            printf(", ");
        }
    }
    printf("\n");

    printf("Printed Through While Loop:\n");
    int i = 1;
    while (i < 11)
    {
        printf("%d", i);
        if (i != 10)
        {
            printf(", ");
        }
        i++;
    }
    printf("\n");

    printf("Printed Through Do While Loop:\n");
    i = 1;
    do
    {
        printf("%d", i);
        if (i != 10)
        {
            printf(", ");
        }
        i++;
    } while (i > 1 && i < 11);
    printf("\n");

    return 0;
}
