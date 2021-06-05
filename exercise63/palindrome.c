#include <stdio.h>
int isPalindrome(int n)
{
    int s = 0, r, m;
    // l = len(n);
    m = n;
    while (n != 0)
    {
        // s = s * 10 + n % 10;
        r = n % 10;
        s = (s * 10) + r;
        n /= 10;
    }
    if (s == m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter a number to check a palindrome or not\n");
    scanf("%d", &num);
    if (isPalindrome(num))
    {
        printf("Given number is palindrome");
    }
    else
    {
        printf("Given number is not a palindrome");
    }
    return 0;
}