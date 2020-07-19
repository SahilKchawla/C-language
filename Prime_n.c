#include<stdio.h>
void main()
{
    int n,i,j,flag=1;
    printf("enter a no");
    scanf("%d",&n);
    printf("the prime no.s from 1 to %d are: \n",n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
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
        if(flag==1)
            printf("%d \n",i);
    }
}
