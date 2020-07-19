#include<stdio.h>
void main()
{
    int a[100],i,n,x,count=0;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements one by one");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element whose occ is to be searched");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("the index of %d is %d\n",x,i);
            count++;
        }
    }
    if(count==0)
        printf("%d is not there",x);
}
