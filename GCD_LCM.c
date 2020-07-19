#include<stdio.h>
void main()
{
    int x,y,min,i,gcd=1,lcm;
    printf("enter 2 no.s");
    scanf("%d %d",&x,&y);
    if(x<y)
        min=x;
    else
        min=y;
    for(i=2;i<=min;i++)
    {
        if(x%i==0 && y%i==0)
            gcd=i;
    }
    lcm=(x*y)/gcd;
    printf("the GCD of %d and %d is %d \n",x,y,gcd);
    printf("the LCM of %d and %d is %d \n",x,y,lcm);
}
