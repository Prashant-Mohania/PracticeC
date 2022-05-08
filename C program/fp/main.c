#include <stdio.h>
int main()
{
    int arr[100], n, num, first, last, middle,x;
    printf("enter number of element in array:-\n");
    scanf("%d", &n);
    printf("Enter array:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("Enter number to find:-\n");
    scanf("%d", &num);
    first = 1;
    last = n;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (arr[middle] < num)
        {
            first = middle + 1;
        }
        else if (arr[middle] == num)
        {
            printf("%d is present at %d", num, middle + 1);
            break;
        }
        else
        {
            last = middle - 1;
        }
    }
    if (first > last)
    {
        printf("Not found!  %d is not present in list", num);
    }

    return 0;
}
