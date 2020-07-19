#include<stdio.h>
int main()
{
    int n;
    char c;
    printf("enter a no to convert it into char");
    scanf("%d",&n);
    c=(char)n;
    printf("the char of %d is %c",n,c);
}
