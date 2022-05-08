/*#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("enter number a:-");
    scanf("%d",&a);
    printf("enter number b:-");
    scanf("%d",&b);
    sum = a+b;
    printf("total is %d",sum);
}*/


#include <stdio.h>
#include <conio.h>
int main()
{
    int a,s,sum=0;
    printf("enter a three digit number:-");
    scanf("%d",&a);
    s=a%10;
    sum=sum+s;
    a=a/10;
    s=a%10;
    sum=sum+s;
    a=a/10;
    s=a%10;
    sum=sum+s;
    printf("sum is %d",sum);
}
