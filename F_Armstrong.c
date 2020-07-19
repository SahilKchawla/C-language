#include<stdio.h>
void main()
{
    int n,ans=1;
    int Armstrong(int);
    printf("enter a no");
    scanf("%d",&n);
    ans=Armstrong(n);
    if(ans==1)
        printf("%d is armstrong",n);
    else
        printf("%d is not armstrong",n);
}
int Armstrong(int n)
{
    int i,dig,rev=0,flag=1,temp;
    temp=n;
    while(n>0)
    {
        dig=n%10;
        rev=rev+(dig*dig*dig);
        n=n/10;
    }
    if(temp==rev)
    {
        flag=1;
    }

    else
    {
        flag=0;
    }
    return flag;
}
