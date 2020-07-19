#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("enter the n natural no");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of %d natural no is %d",n,sum);
}
