#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("enter number:-");
    scanf("%d", &a);
    b = a % 11;
    c = 11 - b;
    d = a + c;
    e = a - b;
    if (a % 11 == 0)
    {
        printf("%d is divisible by 11", a);
    }
    else
    {
        printf("%d is next divisible number by 11 and %d is last divisible number by 11", d, e);
    }
    return 0;
}