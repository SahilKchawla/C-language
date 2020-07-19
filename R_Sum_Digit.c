#include<stdio.h>
void main()
{
    int n,ans;
    int Sum(int);
    printf("enter a no");
    scanf("%d",&n);
    ans=Sum(n);
    printf("the sum of all digits in %d is %d",n,ans);
}
int Sum(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+Sum(n/10);
}
