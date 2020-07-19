#include<stdio.h>
void main()
{
    int n,p;
    int Prime(int);
    printf("enter a no");
    scanf("%d",&n);
    p=Prime(n);
    if(p==1)
        printf("%d is prime",n);
    else
        printf("%d is not prime",n);
}
int Prime(int n)
{
    int i,flag=1;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        else
            flag=1;
    }
    return flag;
}
