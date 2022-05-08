#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, c;
    printf("Enter number upto you want to print fabonacci series:-\n");
    scanf("%d", &num);
    printf("fabonacci series.....\n");
    printf("%d %d ", a, b);
    for (int i = 0; i < num - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}