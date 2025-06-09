#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int modu(int a,int b)
{
    return a%b;
}
int main()
{
    printf("The output is:%d\n",sum(5,7));
    printf("The output is:%d\n",div(555,5));
    printf("The output is:%d\n",sum(5,6343));
    printf("The output is:%d\n",sub(66,65));
    printf("The output is:%d\n",multi(5,3));
    printf("The output is:%d\n",modu(15,3));
}







