#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,sum=0;
    printf("enter n natural no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("the sum of square of %d is %d",n,sum);
}
