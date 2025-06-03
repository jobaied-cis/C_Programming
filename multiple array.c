#include<stdio.h>
int main()
{
    int arr[5],i,result=1;
    printf("enter an value:");
    for(i=0;i<=4;i++)
    {

        scanf("%d",&arr[i]);
    }

    for(i=0;i<=4;i++)
    {
       result=result*arr[i];
    }
    printf("the final value is %d\n",result);
}


