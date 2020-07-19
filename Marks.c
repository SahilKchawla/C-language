#include<stdio.h>
void main()
{
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks<0 && marks>100)
    {
        printf("enter valid marks");
    }
    else
    {
        if(marks>70)
            printf("Distinction");

        else if(marks>60)
            printf("First Class");

        else if(marks>50)
            printf("Second class");

        else if (marks>40)
            printf("Pass class");

        else
            printf("Last class");
    }
}
