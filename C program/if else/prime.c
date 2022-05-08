#include <stdio.h>
int main()
{
    int num, c = 0;
    printf("Enter number to check prime or not:-\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d not a prime number", num);
    }
    return 0;
}