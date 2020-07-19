#include<stdio.h>
void main()
{
    int n,g[11],i,m;
    printf("enter no of students");
    scanf("%d",&n);
    printf("enter marks none by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m>=0 && m<=100)
            g[m/10]++;
    }
    for(i=0;i<n;i++)
        printf("no of students in grade %d is %d \n",n,g[m]);
}
