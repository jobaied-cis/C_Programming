#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("enter an value:");
    for(i=0;i<=4;i++)
    {

        scanf("%d",&arr[i]);
    }

    for(i=0;i<=4;i++)
    {
       printf("the final value is%d\n",arr[i]);
    }
}
