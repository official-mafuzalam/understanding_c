#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rowA, columnA, rowB, columnB;

    printf("Enter how many row you want for Matrix A: ");
    scanf("%d", &rowA);

    printf("Enter how many column you want for Matrix A: ");
    scanf("%d", &columnA);

    printf("Enter how many row you want for Matrix B: ");
    scanf("%d", &rowB);

    printf("Enter how many column you want for Matrix B: ");
    scanf("%d", &columnB);

    int matrixA[rowA][columnA], matrixB[rowB][columnB], resultMatrix[rowA][columnB];

    if (columnA == rowB)
    {
        // Input Matrix A
        printf("Enter elements for Matrix A:\n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                printf("Enter value for row %d and column %d: ", i, j);
                scanf("%d", &matrixA[i][j]);
            }
        }

        // Input Matrix B
        printf("Enter elements for Matrix B:\n");
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("Enter value for row %d and column %d: ", i, j);
                scanf("%d", &matrixB[i][j]);
            }
        }

        // Initialize resultMatrix to zeros
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                resultMatrix[i][j] = 0;
            }
        }

        // Matrix multiplication
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

        printf("Matrix A value is: \n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                printf("%d \t", matrixA[i][j]);
            }

            printf("\n");
        }
        printf("\n");

        printf("Matrix B value is: \n");
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("%d \t", matrixB[i][j]);
            }

            printf("\n");
        }
        printf("\n");

        // Display the resultMatrix
        printf("Resultant Matrix:\n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("%d\t", resultMatrix[i][j]);
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
