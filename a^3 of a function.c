#include<stdio.h>
int square(int a)
{
    return a*a*a;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int result = square(a);
    printf("The output is:%d\n",result);
}


