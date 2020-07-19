#include<stdio.h>
void main()
{
    int x,y,z,no;
    printf("enter three no.s");
    scanf("%d %d %d",&x,&y,&z);
    if (x>y && y>z)
        printf("%d is greater than %d and %d \n",x,y,z);

    else if (y>z)
        printf("%d is greater than %d and %d \n",y,x,z);

    else
        printf("%d is greater than %d and %d \n",z,x,y);

    no=(x>y && x>z)?x:(y>z)?y:z;
    printf("%d is greater",no);
}
