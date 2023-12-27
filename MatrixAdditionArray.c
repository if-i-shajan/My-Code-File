// code for ADDITION AND SUBTRACTION OF MATRIX
#include <stdio.h>
int main()
{
    int i, j, nr, nc; // nr=number of rows & nc=number of columns
    int A[10][10], B[10][10], C[10][10];
    printf("Enter the number of Rows and Columns:\n");
    scanf("%d %d", &nr, &nc);
    printf("\tEnter elements for A matrix:\n ");

    // scanning A matrix

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("\t\nEnter elements for B matrix: \n");

    // scanning B matrix

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // Printing A matrix

    printf("\nA = \t");
    for (i = 0; i < nr; i++) // for row
    {
        for (j = 0; j < nc; j++) // for colum
        {
            printf("\t");
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    // Printing B matrix

    printf("\nB = \t");
    for (i = 0; i < nr; i++) // for row
    {
        for (j = 0; j < nc; j++) // for colum
        {
            printf("\t");
            printf("%d", B[i][j]);
        }
        printf("\n");
    }

    // Addding A and B

    for (i = 0; i < nr; i++) // for row
    {
        for (j = 0; j < nc; j++) // for col
        {
            C[i][j] = A[i][j] + B[i][j]; /// FOR SUBTRACTION USE - HERE
        }
    }

    // Printing C matrix

    printf("\nC = \t");
    for (i = 0; i < nr; i++) // for row
    {
        for (j = 0; j < nc; j++) // for col
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
}