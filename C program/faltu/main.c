/*#include <stdio.h>
#include <math.h>
 void main()
 {
     long int n,r,sum=0,t,c=0,k;
     printf("enter:-");
     scanf("%d",&n);
     t=n;
     while(t!=0)
     {
         t/=10;
         c++;
     }
     k=n;
     while(n!=0)
     {
         r=n%10;
         sum=sum + pow(r,c);
         n=n/10;
     }
     if(sum==k)
     {
         printf("%d is a armstrong number",k);
     }
     else
     {
         printf("no");
     }
 }*/
#include <stdio.h>
int main()
{
    int prime,i,check=0;
    printf("enter number:-");
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
    return 0;
}
