#include<stdio.h>
void main()
{
    int n,r;
    unsigned long int nf,rf,nrf;
    unsigned long int Fact(int);
    printf("enter n and r");
    scanf("%d %d",&n,&r);
    if(n<0 || r<0 || n<r)
        printf("invalid input");
    else
    {
        nf=Fact(n);
        rf=Fact(r);
        nrf=Fact(n-r);
        printf("%d C %d=%u \n",n,r,nf/(nrf*rf));
        printf("%d P %d=%u \n",n,r,nf/nrf);
    }
}
unsigned long int Fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*Fact(n-1);
}
