#include<stdio.h>
void main()
{
    int n,i,ans;
    int Prime(int);
    printf("enter a no");
    scanf("%d",&n);
    printf("Following are 1 to %d prime no.s \n",n);
    for(i=1;i<=n;i++)
    {
        ans=Prime(i);
        if(ans==1)
            printf("%d \n",i);
    }
}
int Prime(int n)
{
    int i,flag=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
            break;
        }
    }
    return flag;
}
