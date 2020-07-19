#include<stdio.h>
void main()
{
    int n,a[100],max,sec,i,j,temp;
    printf("enter no of elements \n");
    scanf("%d",&n);
    printf("enter elem one by one \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    printf("the highest element in array is %d \n",a[n-1]);
    printf("the sec highest element in array is %d \n",a[n-2]);
}
