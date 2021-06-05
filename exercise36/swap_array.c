#include <stdio.h>
void reverse(int array[])
{
    for (int i = 0; i < 7/2; i++)
    {
        int temp;
        temp = array[i];
        array[i] = array[6 - i];
        array[6 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Before reverse it\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Value of element %d is %d\n", i, arr[i]);
    }
    reverse(arr);
    printf("\nAfter reverse it\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Value of element %d is %d\n", i, arr[i]);
    }
    return 0;
}