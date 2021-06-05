#include <stdio.h>
struct driver
{
    char name[34];
    char dlno[34];
    char route[34];
    int kms;
};
int main()
{
    struct driver d1;
    printf("\t\tEnter driver details\n");
    printf("Enter driver name:-");
    scanf("%s", &d1.name);
    printf("Enter driver route:-");
    scanf("%s", &d1.route);
    printf("Enter driver driving license number:-");
    scanf("%s", &d1.dlno);
    printf("Enter driver kilometer run:-");
    scanf("%d", &d1.kms);

    printf("Drivers name:-%s\n", d1.name);
    printf("Drivers route:-%s\n", d1.route);
    printf("Drivers driving license number:-%s\n", d1.dlno);
    printf("Drivers kilometer run:-%d\n", d1.kms);
    return 0;
}