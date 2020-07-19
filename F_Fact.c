#include<stdio.h>
void main()
{
    int n,fact;
    int facto(int);
    printf("enter a no");
    scanf("%d",&n);
    fact=facto(n);
    printf("the factorial of %d is %d",n,fact);
}
int facto(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
