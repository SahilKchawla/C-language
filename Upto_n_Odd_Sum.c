#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter a no \n");
    scanf("%d",&n);
    printf("the terms are \n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
            sum=sum+i;
        }
    }
    printf("the sum of upto %d odd natural no is %d",n,sum);
}
