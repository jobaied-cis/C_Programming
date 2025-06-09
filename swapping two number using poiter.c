#include<stdio.h>
int main()
{
    int x=12,y=6,temp;
    int *ptr1 ,*ptr2;
    ptr1=&x;
    ptr2=&y;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("THE result is x %d\n",x);
    printf("THE result is y %d\n",y);



}






