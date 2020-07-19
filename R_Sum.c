#include<stdio.h>
void main()
{
    int n,ans;
    int Sum(int);
    printf("enter a no");
    scanf("%d",&n);
    ans=Sum(n);
    printf("the sum of %d natural no is %d",n,ans);
}
int Sum(int n)
{
    if(n==0)
        return 0;
    else
        return n+Sum(n-1);
}
