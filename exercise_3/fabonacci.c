#include <stdio.h>
int fab_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fab_recursive(n - 1) + fab_recursive(n - 2);
    }
}
int fab_itrative(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int main()
{
    int number;
    printf("enter index to get fabonacci series\n");
    scanf("%d", &number);
    printf("fabonacci series at position at %d by itrative is %d\n", number, fab_itrative(number));
    printf("fabonacci series at position at %d by recursive is %d\n", number, fab_recursive(number));
    return 0;
}