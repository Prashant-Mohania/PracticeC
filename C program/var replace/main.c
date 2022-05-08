#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter two number:-");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d",a);
    printf("\nb=%d",b);
}
