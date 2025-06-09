#include<stdio.h>
int main()
{
    int x=5;
    int *ptr;
    ptr=&x;
    printf("value of x %d\n",x);
    printf("address of x %x\n",&x);
    printf(" %d\n",ptr);
    printf("%d\n",*ptr);



}


