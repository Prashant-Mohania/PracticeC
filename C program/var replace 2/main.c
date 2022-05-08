#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two number:-");
    scanf("%d%d",&a,&b);//a=5 b=6
    a=a+b;//a=11
    b=a-b;//b=5
    a=a-b;//a=6
    printf("a=%d",a);//a=6
    printf("\nb=%d",b);//b=5
    return 0;
}
