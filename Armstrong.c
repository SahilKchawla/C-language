#include<stdio.h>
int main()
{
    int n,temp,sum=0,r;
    printf("enter a no");
    scanf("%d",&n);
    temp=n;
    if(n>0)
    {
        while(n!=0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
    }
    else
    {
        printf("invalid input");
    }
    if(sum==temp)
        printf("%d is armstrong",temp);
    else
        printf("%d is not armstrong",temp);
}
