#include<stdio.h>
int main()
{
    int marks[10],i;
    printf("enter an value:");
    for(i=0;i<=9;i++)
    {

        scanf("%d",&marks[i]);
    }

    for(i=0;i<=9;i++)
    {
        if(marks[i]<35)
       printf("the less then 35 mark is %d\n",i);
    }
    return 0;
}



