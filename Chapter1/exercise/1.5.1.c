#include <stdio.h>

int main(int argc, char const *argv[])
{
    int length, area;

    printf("Enter cube length: ");

    scanf("%d", &length);

    area = length * length * length;

    printf("Area of the cube is: %d", area);

    return 0;
}
