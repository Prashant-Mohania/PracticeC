#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], sum = 0, arow, acol, brow, bcol;
    // take number row and column from user
    printf("How many Rows and Column in First matrix:- ");
    scanf("%d%d", &arow, &acol);
    printf("How many Rows and Column in Second matrix:- ");
    scanf("%d%d", &brow, &bcol);

    a[arow][acol];
    b[brow][bcol];
    c[arow][bcol];

    //according to the matrix rule
    // no. of column of first matrix and no. of rows of second matrix is same then only we can multiply it

    if (acol == brow)
    {
        printf("Enter first matrix:-\n");
        for (int i = 0; i < arow; i++)
        {
            for (int j = 0; j < bcol; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter second matrix:-\n");
        for (int i = 0; i < brow; i++)
        {
            for (int j = 0; j < bcol; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\n");
        printf("\n");

        // print first matrix

        printf("matrix First:-\n");
        for (int i = 0; i < arow; i++)
        {
            for (int j = 0; j < acol; j++)
            {
                printf("%d  ", a[i][j]);
            }
            printf("\n");
        }

        printf("\n");
        printf("\n");

        // print second matrix

        printf("matrix Second:-\n");

        for (int i = 0; i < brow; i++)
        {
            for (int j = 0; j < bcol; j++)
            {
                printf("%d  ", b[i][j]);
            }
            printf("\n");
        }

        printf("\n");
        printf("\n");
        // multiply matrix
        for (int i = 0; i < arow; i++)
        {
            for (int j = 0; j < bcol; j++)
            {
                //arr3[i][j]+=arr1[i][j]*arr2[j][i];
                sum += a[i][j] * b[j][i];
                c[i][j] = sum;
            }
            printf("\n");
        }

        // matrix after multiply
        printf("Multiply Matrix\n");
        for (int i = 0; i < arow; i++)
        {
            for (int j = 0; j < bcol; j++)
            {
                printf("%d  ", c[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Cannot multiply these matrices");
    }

    return 0;
}