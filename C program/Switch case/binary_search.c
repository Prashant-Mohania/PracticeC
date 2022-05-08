#include <stdio.h>
int main()
{
    int arr[5], n, num, first, last, middle;
    printf("enter number of element in array:-\n");
    scanf("%d", &n);
    printf("Enter array:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("Enter number to find:-\n");
    scanf("%d", &num);
    first = 0;
    last = n-1;
    middle = (int)(first + last) / 2;
    //printf("%d",middle);
    while (first <=last)
    {
        middle = (int)(first + last) / 2;
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
            //printf("%d",last);
        }
    }
    if (first > last)
    {
        printf("Not found!  %d is not present in list", num);
    }
    return 0;
}