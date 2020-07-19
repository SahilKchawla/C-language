#include<stdio.h>
void main()
{
    int n;
    printf("enter a no");
    scanf("%d",&n);

    switch(n)
    {
        case 1:printf("no is odd");break;
        case 2:printf("no is even");break;
        case 3:printf("no is odd");break;
        case 4:printf("no is even");break;
        case 5:printf("no is odd");break;
        case 6:printf("no is even");break;
        case 7:printf("no is odd");break;
        case 8:printf("no is even");break;
        case 9:printf("no is odd");break;
        default :printf("no not in range");
    }
}
