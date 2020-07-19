#include<stdio.h>
void main()
{
    int n,term=0,i,sum=0;
    int Fibo(int);
    printf("enter a no");
    scanf("%d",&n);
    printf("Following are %d Fibo terms :",n);
    for(i=1;i<=n;i++)
    {
        term=Fibo(i);
        printf("%d \t",term);
        sum=sum+term;
    }
    printf("\n the sum of all %d fibo terms is %d ",n,sum);
}
int Fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return Fibo(n-1)+Fibo(n-2);
}
