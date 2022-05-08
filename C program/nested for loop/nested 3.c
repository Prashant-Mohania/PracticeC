#include <stdio.h>

int main()
{
    int i,j,a=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",a);
            a++;
        }
        printf("\n");
    }
}
