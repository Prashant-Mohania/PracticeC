#include <stdio.h>

int main()
{
    int mat[3][3],i,j;
    printf("Enter matrix (3x3):-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Diagonal of given matrix are ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            {
                printf("%d ",mat[i][j]);
            }
        }
    }
    return 0;
}