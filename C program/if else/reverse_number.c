#include <stdio.h>
int main()
{
    int num, r;
    printf("Enter number:-\n");
    scanf("%d", &num);
    printf("actual number:-%d\n", num);
    printf("reverse number:-");
    for (int i = 1; i <= 3; i++)
    {
        r = num % 10;
        printf("%d", r);
        num /= 10;
    }
    return 0;
}