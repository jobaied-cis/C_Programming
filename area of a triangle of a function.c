#include<stdio.h>
float triangle(int a,int b)
{
    return 0.5*a*b;
}
int main()
{
    int num1,num2;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    int result = triangle(num1,num2);
    printf("The output is:%d\n",result);
}

