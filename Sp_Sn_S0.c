#include<stdio.h>
void main()
{
    int i,n,x,sp=0,sn=0,ap=0,an=0,cp=0,cn=0,cz=0;
    printf("enter how many no.s do u want?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>0)
        {
            cp++;
            sp=sp+x;
        }
        else if(x<0)
        {
            cn++;
            sn=sn+x;
        }
        else
        {
            cz++;
        }
    }
    printf("count of + no.s are %d \n",cp);
    printf("count of - no.s are %d \n",cn);
    printf("count of 0 no.s are %d \n",cz);
    printf("sum of + natural no is %d \n",sp);
    printf("sum of - natural no is %d \n",sn);
    printf("avg of + natural no is %d \n",sp/cp);
    printf("avg of - natural no is %d \n",sn/cn);
}
