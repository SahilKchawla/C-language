#include<stdio.h>
void main()
{
    int i,n,a[100],max;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter the elements one by one");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
        if(a[i]>max)
            max=a[i];
    printf("the highest value is %d",max);
}
