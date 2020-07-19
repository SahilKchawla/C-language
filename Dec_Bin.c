#include<stdio.h>
void main()
{
    int n;
    void dec_bin(int);
    printf("enter a no");
    scanf("%d",&n);
    dec_bin(n);
}
void dec_bin(int n)
{
    int r;
    if(n>0)
    {
        dec_bin(n/2);
        r=n%2;
        printf("%d",r);
    }
}
