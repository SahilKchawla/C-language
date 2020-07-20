#include<stdio.h>
void main()
{
    int a[100],x,i,n,ans;
    int search(int *,int,int);
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter elements one by one \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched \n");
    scanf("%d",&x);
    ans=search(a,n,x);
    if(ans==0)
        printf("%d is not present",x);
    else
        printf("%d is present %d times",x,ans);
}
int search(int *a,int n,int x)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            count++;
    }
    return count;
}
