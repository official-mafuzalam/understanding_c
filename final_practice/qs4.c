#include <stdio.h>

void printArray(int array[], int size);

int main()
{
    int size, index;
    printf("Enter the Size of the integer Array:\n");
    scanf("%d", &size);
    int collection[size];

    printf("Enter the Elements of the Array:\n");
    index = 0;
    while (index < size)
    {
        scanf("%d", &collection[index]);
        index++;
    }

    printf("\nThe Unsorted Array is:\n");
    printArray(collection, size);

    // Sorting starts from here
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size - i; j++)
        {
            if (collection[j - 1] > collection[j])
            {
                int temp = collection[j - 1];
                collection[j - 1] = collection[j];
                collection[j] = temp;
            }
        }
    }

    printf("\nThe Sorted Array is:\n");
    printArray(collection, size);

    return 0;
}

void printArray(int array[], int size)
{
    if (array != NULL)
    {
        int index = 0;
        while (index < size)
        {
            printf("%d", array[index]);
            if (index < size - 1)
                printf(", ");
            index++;
        }
    }
    return;
}