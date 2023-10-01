#include <stdio.h>

int main()
{
    int hight, weight;

    printf("Enter house hight and weight: \n");
    scanf("%d %d", &hight, &weight);

    printf("Current Hight is: %d \n", hight);
    printf("Current Weight is: %d \n", weight);

    // hight = (hight + weight) - (weight = hight);

    hight = hight + weight;

    weight = hight - weight;

    hight = hight - weight;

    printf("New Hight is: %d \n", hight);
    printf("New Weight is: %d \n", weight);

    return 0;
}
