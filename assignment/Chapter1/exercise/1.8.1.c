#include <stdio.h>

float convert();

int main()
{
    float value = convert();

    printf("You have %.3f pounds", value);

    return 0;
}

float convert()
{
    float value_d, value_p;

    printf("Enter how much dollar you have: ");
    scanf("%f", &value_d);

    value_p = value_d * 2.00;

    return value_p;
}
