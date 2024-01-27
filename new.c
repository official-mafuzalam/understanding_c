#include <stdio.h>
#include <conio.h> // This header file is specific to certain compilers like Turbo C

int main()
{
    char ch;

    printf("Press any key: ");
    ch = getch(); // Read a single character

    printf("\nThe key pressed is: %c\n", ch);

    return 0;
}
