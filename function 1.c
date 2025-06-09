#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    int result = sum(num1,num2);
    printf("The output is:%d\n",result);
}
