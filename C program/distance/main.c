#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    int cm,mtr;
    printf("enter a distance in km:-");
    scanf("%f",&n);
    mtr = n*1000;
    cm = mtr*100;
    printf("Distance in meter :-%d m",mtr);
    printf("\nDistance in centimeter:-%d cm",cm);
}
