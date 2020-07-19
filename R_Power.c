#include<stdio.h>
void main()
{
    int x,y,ans;
    int Power(int,int);
    printf("enter a base and power");
    scanf("%d %d",&x,&y);
    ans=Power(x,y);
    printf("the value is %d",ans);
}
int Power(int x,int y)
{
    if(y==0)
        return 1;
    else if(y==1)
        return x;
    else
        return x*Power(x,y-1);
}
