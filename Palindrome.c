#include<stdio.h>
void main()
{
    int n,i,rev=0,temp,dig;
    printf("enter a no");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(temp==rev)
        printf("%d is palindrome",temp);
    else
        printf("%d is not palindrome",temp);
}
