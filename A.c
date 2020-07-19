#include<stdio.h>
void main()
{
    int i,op,temp,n;
    int a[100];
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements one by one");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter ur option");
    scanf("%d",&op);
    if(op==1)
    {
        temp=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    else if(op==2)
    {
        temp=a[0];
        for(i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    printf("rotated array \n");
    for(i=0;i<n;i++)
        printf("%d \t",a[i]);
}
