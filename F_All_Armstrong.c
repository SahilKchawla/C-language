#include <stdio.h>
void armstronginrange(int a,int b)
{
int i,j;
int num=0;
int n=0;
int rem=0,sum=0;
for(i=a;i<=b;i++)
{
rem=0,sum=0;
n=i;
while(n>0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(sum==i)
{
printf("%d ",sum);
}
}
}
int main()
{
int a,b;
printf("ENTER THE INNER RANGE : \n");
scanf("%d",&a);
printf("ENTER THE OUTER RANGE : \n");
scanf("%d",&b);
armstronginrange(a,b);
return 0;
}
