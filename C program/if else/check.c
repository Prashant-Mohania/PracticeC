#include <stdio.h>

int main()
{
    int num;
    printf("Enter number to check whether +ve , -ve and zero:-\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("The input number is negative\n");
    }
    else if(num>0)
    {
        printf("The input number is positive");
    }
    else
    {
        printf("The input number is zero");
    }
    return 0;
}