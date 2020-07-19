#include<stdio.h>
void main()
{
    int n,i,dig;
    char c;
    printf("enter a integer");
    scanf("%d",&n);
    while(n>0)
    {
        dig=dig%10;
        c=(char)dig;
        printf("%c",c);
        n=n/10;
    }

}
