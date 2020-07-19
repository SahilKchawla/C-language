#include<stdio.h>
void main()
{
    int y,i;
    float x,prod=1;
    printf("enter the base");
    scanf("%f",&x);
    printf("enter the power");
    scanf("%d",&y);
    if(y==0)
    {
        if(x==0)
            printf("ans is undetermined");
        else
            printf("ans is 1");
    }
    else if(y>0)
    {
        if(x==0)
            printf("ans is 0");
        else
        {
            for(i=1;i<=y;i++)
                prod=prod*x;
            printf("ans is %f",prod);
        }
    }
    else
    {
        if(x==0)
            printf("ans is infinity");
        else
        {
            for(i=1;i<=-y;i++)
                prod=prod*(1/x);
            printf("ans is %f",prod);
        }
    }
}
