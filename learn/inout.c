#include <stdio.h>

int main()
{
    char message[100];

    printf("Type a message: ");

    scanf("%c", &message);

    fgets(message, sizeof(message), stdin); // Read a line of text

    printf("%s", message);

    return 0;
}
