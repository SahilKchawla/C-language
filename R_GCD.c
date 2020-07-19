#include<stdio.h>
void main()
{
    int m,n,ans;
    int GCD(int,int);
    printf("enter two pos no.s");
    scanf("%d %d",&m,&n);
    ans=GCD(m,n);
    printf("GCD of %d and %d is %d",m,n,ans);
}
int GCD(int m,int n)
{
    if(m<n)
        return GCD(n,m);
    else if (n==0)
        return m;
    else
        return GCD(n,m%n);
}

