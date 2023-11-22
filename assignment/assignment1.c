#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    gets(name);

    printf("Your input name is: ");
    puts(name);

    int nameLength = strlen(name);
    int reversNameIndex = 0;

    char reverseName[nameLength + 1];

    for (int i = nameLength - 1; i >= 0; i--)
    {
        reverseName[reversNameIndex] = name[i];
        reversNameIndex++;
    }

    reverseName[reversNameIndex] = '\0';

    printf("Your reverse name is: ");
    puts(reverseName);

    return 0;
}
