#include<stdio.h>
int main()
{
    int x=5,y=6,z=10;
    int *ptr;
    ptr=&x;
    printf("value of x %d\n",*ptr);
    ptr=&y;
    printf("value of y %d\n",*ptr);
    ptr=&z;
    printf("value of z %d\n",*ptr);



}



