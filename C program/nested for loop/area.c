#include <stdio.h>
int main()
{
    int r, l, b, num;
    while (1)
    {
        printf("\t\t\tChoose one\n");
        printf("1: area of circle\n");
        printf("2; area of rectangle\n");
        printf("3: Quit\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter radius of circle:-\n");
            scanf("%d", &r);
            printf("Area of circle is %d radius is %f\n", r, (float)3.14 * r * r);
            break;
        case 2:
            printf("Enter length and breadth of rectangle:-\n");
            scanf("%d%d", &l, &b);
            printf("Area of rectangle of %d length and %d breadth is %d\n", l, b, l * b);
            break;
        case 3:
            printf("You are quiting");
            goto end;
        default:
            printf("You enter a invalid number");
            break;
        }
    }
end:
    return 0;
}