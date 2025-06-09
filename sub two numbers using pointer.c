#include<stdio.h>
int main()
{
    int x=10,y=6,sub;
    int *ptr1 ,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sub=*ptr1-*ptr2;
    printf("value of x %d\n",sub);



}





