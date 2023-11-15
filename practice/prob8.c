#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a lowercase alphabet: ");

    ch = getchar();

    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    else
    {
        printf("Invalid input. Please enter a valid lowercase alphabet.\n");
    }

    return 0;
}
