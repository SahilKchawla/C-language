#include<stdio.h>
void main()
{
    int n,ans;
    int Fact(int);
    printf("enter a no");
    scanf("%d",&n);
    ans=Fact(n);
    printf("the factorial of %d is %d",n,ans);
}
int Fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*Fact(n-1);
}
