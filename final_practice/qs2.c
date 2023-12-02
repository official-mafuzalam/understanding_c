#include <stdio.h>

int main()
{
    int numbers[10] = {10, 12, 15, 18, 21, -20, -100, 5, 19, 30};

    int max = -1000;
    int min = 1000;

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        else if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    printf("Max value is: %d and min value is: %d \n", max, min);

    return 0;
}
