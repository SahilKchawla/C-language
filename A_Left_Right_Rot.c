#include<stdio.h>
void main()
{
    int n,a[100],i,temp,op;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elem one by one \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("1:Left Rotate \n2:Right Rotate \n");
    printf("enter ur option");
    scanf("%d",&op);
    if(op==1)
    {
        temp=a[0];
        for(i=0;i<n-1;i++)
            a[i]=a[i+1];
        a[n-1]=temp;
    }
    else if(op==2)
    {
        temp=a[n-1];
        for(i=n-1;i>0;i--)
            a[i]=a[i-1];
        a[0]=temp;
    }
    printf("rotated array\n");
    for(i=0;i<n;i++)
        printf("%d \t",a[i]);
}
