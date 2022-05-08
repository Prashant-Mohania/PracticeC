#include <stdio.h>
int main() {
    int arr1[3][3],arr2[3][3],arr3[30][3],sum=0;
    printf("Enter first matrix:-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second matrix:-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //arr3[i][j]+=arr1[i][j]*arr2[j][i];
            sum+=arr1[i][j]*arr2[j][i];
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}