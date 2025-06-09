#include<stdio.h>
int main()
{
    int x=12,y=6,div;
    int *ptr1 ,*ptr2;
    ptr1=&x;
    ptr2=&y;
    div=*ptr1 / *ptr2;
    printf("THE result is %d\n",div);



}





