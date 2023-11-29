#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    char sub_string[20];

    printf("Enter your sentence: ");
    fgets(string, sizeof(string), stdin);

    printf("Enter a word for search: ");
    fgets(sub_string, sizeof(sub_string), stdin);

    // Removing newline characters from user inputs
    string[strcspn(string, "\n")] = '\0';
    sub_string[strcspn(sub_string, "\n")] = '\0';

    if (strstr(string, sub_string) != NULL)
    {
        printf("'%s' is present in '%s'\n", sub_string, string);
    }
    else
    {
        printf("'%s' is not present in '%s'\n", sub_string, string);
    }

    return 0;
}
