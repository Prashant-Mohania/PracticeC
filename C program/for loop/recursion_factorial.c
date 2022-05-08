#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter number to check its factorial:-\n");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, fact(num));
    return 0;
}
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
    return 0;
}
