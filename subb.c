#include<stdio.h>
int main()
{
    int i,sub=0,n;
    printf("enter a value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sub=sub-i;
    }
    printf("the result is=%d\n",sub);
    return 0;
}
