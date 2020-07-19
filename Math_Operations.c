#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
    {
        printf("the addition of %d and %d is %d \n",x,y,x+y);
        printf("the subtraction of %d and %d is %d \n",x,y,x-y);
        printf("the multiplication of %d and %d is %d \n",x,y,x*y);
        printf("the div of %d and %d is %d \n",x,y,x/y);
    }
    else
    {
        printf("invalid input");
    }
}
