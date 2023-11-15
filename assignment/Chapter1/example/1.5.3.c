#include <stdio.h>

int main()
{

    int length, width;

    printf("Enter rectangle length: ");
    scanf("%d", &length);

    printf("Enter rectangle width: ");
    scanf("%d", &width);

    int area = length * width;

    printf("The area of rectangle is: %d", area);

    return 0;
}
