#include<stdio.h>
void main()
{
    int a[100],x,i,n,j;
    void insert1(int *,int,int,int);
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter elements one by one \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be inserted \n");
    scanf("%d",&x);
    printf("enter the position where to insert \n");
    scanf("%d",&j);
    insert1(a,n,x,j);
    n++;
    for(i=0;i<n;i++)
        printf("%d \t",a[i]);
}
void insert1(int *a,int n,int x,int j)
{
    int i,count=-1;
    for(i=n;i>j;i--)
    {
        a[i]=a[i-1];
    }
    a[j]=x;
}
