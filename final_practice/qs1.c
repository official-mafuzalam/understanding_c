#include <stdio.h>

int main()
{
    int rowA, rowB, columnA, columnB;

    printf("Enter how many row you want for matrix A: ");
    scanf("%d", &rowA);

    printf("Enter how many column you want for matrix A: ");
    scanf("%d", &columnA);

    printf("Enter how many row you want for matrix B: ");
    scanf("%d", &rowB);

    printf("Enter how many column you want for matrix B: ");
    scanf("%d", &columnB);

    int matrixA[rowA][columnA], matrixB[rowB][columnB], resultMatrix[rowA][columnA];

    if (rowA == rowB && columnA == columnB)
    {

        printf("For Matrix A: \n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                printf("Enter value for row %d and column %d: ", i, j);
                scanf("%d", &matrixA[i][j]);
            }
        }

        printf("For Matrix B: \n");
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("Enter value for row %d and column %d: ", i, j);
                scanf("%d", &matrixB[i][j]);
            }
        }

        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }

        printf("Matrix A is: \n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < columnA; j++)
            {
                printf("%d \t", matrixA[i][j]);
            }
            printf("\n");
        }

        printf("Matrix B is: \n");
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < columnB; j++)
            {
                printf("%d \t", matrixB[i][j]);
            }
            printf("\n");
        }

        printf("Result Matrix is: \n");
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
        printf("Please enter valid dimension for matrix sub. \n");
    }

    return 0;
}
