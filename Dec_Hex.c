#include<stdio.h>
void main()
{
    int n;
    void dec_hex(int);
    printf("enter a no");
    scanf("%d",&n);
    dec_hex(n);
}
void dec_hex(int n)
{
    int r;
    if(n>0)
    {
        dec_hex(n/16);
        r=n%16;
        if(r>=0 && r<=9)
            printf("%d",r);
        else
        {
            switch(r)
            {
                case 10 :printf("A");break;
                case 11 :printf("1B");break;
                case 12 :printf("C");break;
                case 13 :printf("D");break;
                case 14 :printf("E");break;
                case 15 :printf("F");break;
            }
        }

    }
}
