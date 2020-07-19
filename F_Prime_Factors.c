#include<stdio.h>
int main()
{
    int n;
    void Primef(int);
    printf("enter a no");
    scanf("%d",&n);
    printf("the prime factors of %d are \n",n);
    Primef(n);
}
void Primef(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d \n",i);
    }
}
