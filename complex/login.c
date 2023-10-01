#include <stdio.h>
#include <stdbool.h>

int main()
{
    int myNumbers[2][4] = {{25, 50, 75, 100}, {26, 51, 76, 101}};
    int rows = sizeof(myNumbers) / sizeof(myNumbers[0]);       // calculate the number of rows in the array
    int cols = sizeof(myNumbers[0]) / sizeof(myNumbers[0][0]); // calculate the number of columns in the array
    int id, i, j;
    bool found = false;

    printf("Enter your id: ");
    scanf("%d", &id);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (myNumbers[i][j] == id)
            {
                printf("Login Successful. The value of j is %d\n", j);
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        printf("Access Unsuccessful\n");
    }

    return 0;
}
