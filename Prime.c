#include<stdio.h>
void main()
{
    int n,i,ans;
    printf("enter a no");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            ans=0;
            break;
        }

        else
            ans=1;
    }
    if(ans==0)
        printf("%d is not prime",n);

    else
        printf("%d is prime",n);
}
