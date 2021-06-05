#include <stdio.h>
int main()
{
    int n;
    printf("enter 1 for star paturn or 2 for reverse star paturn\n");
    scanf("%d", &n);
    if (n == 1)
    {
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i <= 4; i++)
        {
            for (int j = 0; j <= 4 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}