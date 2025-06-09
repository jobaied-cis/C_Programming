#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    printf("The output is:%d\n",sum(5,7));
    printf("The output is:%d\n",sum(5,77));
    printf("The output is:%d\n",sum(5,6343));
    printf("The output is:%d\n",sub(66,65));
    printf("The output is:%d\n",sub(5,3));
}




