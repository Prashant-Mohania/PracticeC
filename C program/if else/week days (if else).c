#include <stdio.h>
int main()
{
    int n;
    printf("enter:-");
    scanf("%d",&n);
    if(n==1)
    {
        printf("MONDAY");
    }
    else if(n==2)
    {
        printf("TUESDAY");
    }
    else if(n==3)
    {
        printf("WEDNESDAY");
    }
    else if(n==4)
    {
        printf("THURSDAY");
    }
    else if(n==5)
    {
        printf("FRIDAY0");
    }
    else if(n==6)
    {
        printf("SATURDAY");
    }
    else if(n==7)
    {
        printf("SUNDAY");
    }
    else
    {
        printf("invalid number");
    }
}
