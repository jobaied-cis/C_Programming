
#include<stdio.h>
int main()
{
    int n,sum=0,sub=0,result=1,rem,a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    result=a/b;
    printf("the result is=%d\n",result);
    result=a*b;
    printf("the result is=%d\n",result);
    rem=a%b;
    printf("the result is=%d\n",rem);
    sum=a+b;
    printf("the result is=%d\n",sum);
    sub=a-b;
    printf("the result is=%d\n",sub);
    return 0;
}
