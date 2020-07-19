#include<stdio.h>
void main()
{
    int a[100];
    int n,i,count=0,x;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements one by one \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            count++;
    }
    printf("the count of %d is %d",x,count);
}
