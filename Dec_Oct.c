#include<stdio.h>
void main()
{
    int n;
    void dec_oct(int);
    printf("enter a no");
    scanf("%d",&n);
    dec_oct(n);
}
void dec_oct(int n)
{
    int r;
    if(n>0)
    {
        dec_oct(n/8);
        r=n%8;
        printf("%d",r);
    }

}
