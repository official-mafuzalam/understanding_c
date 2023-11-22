#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    gets(name);

    printf("Your giver name is: ");
    puts(name);

    int nameLength = strlen(name);

    char evenChar[nameLength], oddChar[nameLength];

    int evenIndex = 0;
    int oddIndex = 0;

    for (int i = 0; i < nameLength; i++)
    {
        int even = i % 2;
        if (even == 1)
        {
            evenChar[evenIndex] = name[i];
            evenIndex++;
        }
        else
        {
            oddChar[oddIndex] = name[i];
            oddIndex++;
        }
    }

    evenChar[evenIndex] = '\0'; // Null-terminate the evenChar array
    oddChar[oddIndex] = '\0';   // Null-terminate the oddChar array

    printf("Even char is: ");
    puts(evenChar);

    printf("Odd char is: ");
    puts(oddChar);

    return 0;
}
