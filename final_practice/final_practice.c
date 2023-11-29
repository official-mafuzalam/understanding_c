#include <stdio.h>

int main()
{
    int rowA, rowB, columnA, columnB;

    printf("Enter how much row you want for Matrix A: ");
    scanf("%d", &rowA);
    printf("Enter how much column you want for Matrix A: ");
    scanf("%d", &columnA);

    printf("Enter how much row you want for Matrix B: ");
    scanf("%d", &rowB);
    printf("Enter how much column you want for Matrix B: ");
    scanf("%d", &columnB);

    int matrixA[rowA][columnA], matrixB[rowB][columnB], resultMatrix[rowA][columnA];

    if (rowA == columnB)
    {
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                printf("Enter value for Matrix A, which row is: %d and column is: %d: ", i, j);
                scanf("%d", &matrixA[i][j]);
            }
        }

        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("Enter value for Matrix B, which row is: %d and column is: %d: ", i, j);
                scanf("%d", &matrixB[i][j]);
            }
        }

        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                resultMatrix[i][j] = 0;
            }
        }

        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                for (int k = 0; k < columnA; k++)
                {
                    resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }

        printf("Your input Matrix A value is: \n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                printf("%d \t", matrixA[i][j]);
            }
            printf("\n");
        }

        printf("Your input Matrix B value is: \n");
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("%d \t", matrixB[i][j]);
            }
            printf("\n");
        }

        printf("Result Matrix value is: \n");
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("%d \t", resultMatrix[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible. Please enter valid dimensions.\n");
    }

    return 0;
}
