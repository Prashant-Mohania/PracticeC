#include <stdio.h>
#include <math.h>
#define PI 3.14

float Edistance(int x1, int x2, int y1, int y2)
{
    int d = (y2 - y1) * (y2 - y1) - (x2 - x1) * (x2 - x1);
    return sqrt(d);
}

float AreaOfCircle(int x1, int x2, int y1, int y2, float (*distance)(int x1, int x2, int y1, int y2))
{
    // int a = PI * (distance(int x1, int x2, int y1, int y2) * distance(int x1, int x2, int y1, int y2));
    // return a;
    return distance(x1, x2, y1, y2);
}
int main()
{
    int x1, x2, y1, y2, dst;
    printf("Enter x1\n");
    scanf("%d", &x1);

    printf("Enter y1\n");
    scanf("%d", &y1);

    printf("Enter x2\n");
    scanf("%d", &x2);

    printf("Enter y2\n");
    scanf("%d", &y2);

    dst = AreaOfCircle(x1, x2, y1, y2, Edistance);
    printf("Area of circle is %f\n", dst);

    return 0;
}