#include <stdio.h>
int main()
{
    int arr[5], num, c = 0, i;
    printf("Enter arrey:-\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number you want to search in arrey:-\n");
    scanf("%d", &num);
    for (i = 0; i < 5; i++)
    {
        if (num == arr[i])
        {
            c++;
            break;
        }
    }
    if (c == 1)
    {
        printf("Element found at %d positon", i + 1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}