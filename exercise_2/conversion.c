/*
1 km = 0.621 mile
1 inch = 0.0833 feet
1 cm = 0.394 inch
1 pound = 0.454 kg
1 inch = 0.0254 metre
*/

#include <stdio.h>

int main()
{
    int c, n;
    do
    {
        printf("\t\tconersion\n");
        printf("\t\t---------\n");
        printf("1:- kilometer into miles\n");
        printf("2:- inches into feet\n");
        printf("3:- centemeter into inches\n");
        printf("4:- pound into kilograms\n");
        printf("5:- inches into meter\n");
        printf("6:- exit\n\n");
        printf("Enter number\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("enter number to check:-\n");
            scanf("%d", &c);
            printf("%d km = %f miles\n\n\n", c, (float) c * 0.621);
            break;
        case 2:
            printf("enter number to check:-\n");
            scanf("%d", &c);
            printf("%d inches = %f feets\n\n\n", c, (float) c * 0.0833);
            break;
        case 3:
            printf("enter number to check:-\n");
            scanf("%d", &c);
            printf("%d cm = %f inches\n\n\n", c, (float) c * 0.394);
            break;
        case 4:
            printf("enter number to check:-\n");
            scanf("%d", &c);
            printf("%d pound = %f kgs\n\n\n", c, (float) c * 0.454);
            break;
        case 5:
            printf("enter number to check:-\n");
            scanf("%d", &c);
            printf("%d inches = %f meters\n", c, (float) c * 0.0254);
            break;
        case 6:
            printf("\t\t\t\t6THANK YOU");
            break;

        default:
            printf("You enter invalid number");
        }
    } while (n != 6);
    return 0;
}