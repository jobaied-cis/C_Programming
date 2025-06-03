#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    printf("enter an value:");
    for(i=0;i<=4;i++)
    {

        scanf("%d",&arr[i]);
    }

    for(i=0;i<=4;i++)
    {
       sum=sum+arr[i];
    }
    printf("the final value is %d\n",sum);
}

