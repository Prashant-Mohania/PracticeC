#include <stdio.h>

int main()
{
    int num, sum = 0, r;
    printf("Enter three digit number:-\n");
    scanf("%d", &num);
    for (int i = 1; i <= 3; i++)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf("%d is the sum of digits", sum);
    return 0;
}