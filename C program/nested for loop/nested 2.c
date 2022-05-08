#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(int k=1; k<i;k++)
        {
            printf(" ");
        }
        for(j=4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
