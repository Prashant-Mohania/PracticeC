#include <stdio.h>
#include <conio.h>
int main()
{
    int user,yrs = 365;
    clrscr();
    // take your input
    printf("Enter number of year:- ");
    scanf("%d", &user);

    // print days hours and seconds
    printf("Number of days  = %d\n", yrs);
    printf("Number of hours = %d\n", yrs*24);
    printf("Number of minutes = %d\n", yrs*24*60);
    printf("Number of seconds = %d\n", yrs*24*60*60);
    getch();
    return 0;
}