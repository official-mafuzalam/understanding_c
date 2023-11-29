#include <stdio.h>

int numbers[5];

int *numReturn(); // Declare the function returning a pointer to an integer

int main()
{
    int *ptr = numReturn(); // Call the function and get the pointer to the array

    printf("Numbers entered: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i)); // Access the values through the pointer
    }

    return 0;
}

int *numReturn()
{
    printf("Enter 5 numbers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    return numbers; // Return the pointer to the array
}
