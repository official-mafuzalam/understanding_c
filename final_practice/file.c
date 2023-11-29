#include <stdio.h>

int main()
{
    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "r");

    // fprintf(fptr,"\nMy name is Mafuz Alam");

    char string[100];

    while (fgets(string, 100, fptr))
    {
        printf("%s", string);
    }

    // Close the file
    fclose(fptr);

    return 0;
}
