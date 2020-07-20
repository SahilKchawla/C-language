#include<stdio.h>
void main()
{
    int a[100],x,i,n,ans;
    int index_1(int *,int,int);
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter elements one by one \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched \n");
    scanf("%d",&x);
    ans=index_1(a,n,x);
    if(ans==-1)
        printf("%d is not present",x);
    else
        printf("%d is present at position %d",x,ans);
}
int index_1(int *a,int n,int x)
{
    int i,count=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            {
                count=i;
                break;
            }
    }
    return count;
}
