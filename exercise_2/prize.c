#include <stdio.h>

int main()
{
    int ch;
    printf("\t\tPRIZE DISTRIBUTION");
    printf("\n\n\nEnter subjects you pass(FOR  MATHS=1,SCIENCE=2,BOTH=3)\n");
    scanf("%d",&ch);
    if (ch==3)
    {
        printf("You earn 45 rupees");
    }
    else if (ch==1 || ch==2)
    {
        printf("You earn 15 rupees");
    }
    return 0;
}