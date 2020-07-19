#include<stdio.h>
int main()
{
    int n,r,sum=0,prod=1,rev=0;
    printf("enter a two digit no");
    scanf("%d",&n);
    if(n>=10 && n<=99)
    {
        while(n>0)
        {
            r=n%10;
            sum=sum+r;
            prod=prod*r;
            rev=rev*10+r;
            n=n/10;
        }
    }
    else
    {
        printf("the no is not a two digit no");
    }
    printf("the sum of two digit no is %d \n",sum);
    printf("the product of two digit no is %d \n",prod);
    printf("the reverse of two digit no is %d \n",rev);
}
