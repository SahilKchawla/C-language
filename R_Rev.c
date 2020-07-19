#include<stdio.h>
void main()
{
    int n;
    void Rev(int);
    printf("enter a no");
    scanf("%d",&n);
    Rev(n);
}
void Rev(int n)
{
    int r;
    if(n>0)
    {
        r=n%10;
        printf("%d",r);
        Rev(n/10);
    }
}
