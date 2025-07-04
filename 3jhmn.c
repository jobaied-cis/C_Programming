#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("inter any number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        result=result*i;
    }
        printf("%d\n",result);

    }


