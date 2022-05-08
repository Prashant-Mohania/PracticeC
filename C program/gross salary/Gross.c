#include <stdio.h>
#include <conio.h>
int main()
{
    int s,da,r,gross;
    printf("enter salary;-");
    scanf("%d",&s);
    da = 0.2*s;
    r = 0.4*s;
    gross = s + da + r;
    printf("total salary :-%d",gross);
    getch();
}
