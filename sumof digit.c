#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("sum=%d\n",sum);
    return 0;
}

