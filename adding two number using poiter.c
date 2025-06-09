#include<stdio.h>
int main()
{
    int x=5,y=6,sum;
    int *ptr1 ,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1+*ptr2;
    printf("value of x %d\n",sum);



}




