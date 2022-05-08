#include <stdio.h>
#include <math.h>
int main()
{
    int menu,num1,num2,armstrong_new,pernum,new_armstrong,armstrong,remainder,sum=0,check=0,prime,i;
    do
    {
        printf("\tMAIN MENU\n\n");
        printf("1: Add two numbers\n");
        printf("2: Prime number\n");
        printf("3: Armstrong number\n");
        printf("4: Perfect number\n");
        printf("5: Exit\n\n");
        printf("What do you want?\n");
        scanf("%d",&menu);
        switch(menu)
        {
            case 1: printf("enter two values:-");
                    scanf("%d%d",&num1,&num2);
                    printf("sum of two numbers are %d\n\n",num1+num2);
                    break;
            case 2:  printf("enter number:-");
                    scanf("%d",&prime);
                    for(i=2;i<=prime;i++)
                    {
                        if(prime%i==0)
                    {
                        check++;
                    }
                    }
                    if(check>=2)
                    {
                        printf("%d is not prime number\n\n",prime);
                    }
                    else
                    {
                        printf("%d is a prime number\n\n",prime);
                    }
                    break;
            case 3: printf("Check number:-");
                    scanf("%d",&armstrong);
                    new_armstrong=armstrong;
                    armstrong_new=armstrong;
                    while(armstrong_new!=0)
                    {
                        armstrong_new/=10;
                        check= check + 1;
                    }
                    while(new_armstrong!=0)
                    {
                        remainder=new_armstrong%10;
                        sum+=pow(remainder,check);
                        new_armstrong=new_armstrong/10;
                    }
                    if(sum==armstrong)
                    {
                        printf("%d is armstrong number\n\n",armstrong);
                    }
                    else
                    {
                        printf("It is not a Armstrong number\n\n");
                    }
                    break;
            case 4: printf("enter number:-");
                    scanf("%d",&pernum);
                    for(i=1;i<pernum;i++)
                    {
                        if(pernum%i==0)
                        {
                            sum+=i;
                        }
                    }
                    if(sum==pernum)
                        {
                            printf("%d is a perfect number\n\n",pernum);
                        }
                        else
                        {
                            printf("%d is not a perfect number\n\n",pernum);
                        }
                    break;
            default: printf("Invalid Number");
        }
    }
    while(menu!=5);
    return 0;
}
