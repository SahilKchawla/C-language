#include<stdio.h>
void main()
{
    int a[100],ans,i,x,n;
    int del(int *,int,int);
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements one by one");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter element to be deleted");
    scanf("%d",&x);
    ans=del(a,n,x);
    if(ans==0)
        printf("%d is not present",x);
    else
        printf("%d is deleted successfully \n",x);
    n--;
    for(i=0;i<n;i++)
        printf("%d \t",a[i]);
}
int del(int *a,int n,int x)
{
    int count=0,i,j;
    for(i=0;i<n;i++)
        if(a[i]==x)
        {
            count++;
            break;
        }
    if(count==0)
        return 0;
    else
    {
        for(j=i;j<n;j++)
            a[j]=a[j+1];
        return 1;
    }
}
