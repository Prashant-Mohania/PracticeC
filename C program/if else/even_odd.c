#include <stdio.h>
int main()
{
    int a;
    printf("enter a number:-");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}