#include <stdio.h>

int main()
{
    int days, i, min, max, avg;
    int temp[31];

    printf("Enter how many days temp you want to for quarry: \n");
    scanf("%d", &days);

    for (i = 0; i < days; i++)
    {
        printf("Enter noonday temp of day %d: ", i);
        scanf("%d", &temp[i]);
    }

    avg = 0;
    min = temp[0]; // Initialize min to the first element in the array
    max = temp[0]; // Initialize max to the first element in the array

    for (i = 0; i < days; i++)
    {
        avg = avg + temp[i];

        if (temp[i] > max)
        {
            max = temp[i];
        }

        if (temp[i] < min)
        {
            min = temp[i];
        }
    }

    printf("Average temp of the month is: %d and max temp is: %d and min temp is: %d\n", avg / days, max, min);

    return 0;
}
