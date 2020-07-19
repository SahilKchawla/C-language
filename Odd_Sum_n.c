#include<stdio.h>
void main()
{
    int term,sum=0,n,i;
    printf("enter no");
    scanf("%d",&n);
    printf("the %d odd natural no.s are: \n",n);
    for(i=1;i<=n;i++)
    {
        term=2*i-1;
        printf("%d \n",term);
        sum=sum+term;
    }
    printf("the sum of odd %d natural no is %d",n,sum);
}
