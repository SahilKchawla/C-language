#include<stdio.h>
int main()
{
    int n=1000,i,temp,r=0,N,sum=0;
    for(i=100;i<n;i++)
    {
        r=0;
        sum=0;
        temp=i;
        while(temp>0)
        {
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d \n",sum);
        }
    }
}
