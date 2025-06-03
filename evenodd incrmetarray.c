#include<stdio.h>
int main()
{
    int arr[5]={2,3 ,4,5,6},i;

    for(i=0;i<=4;i++)
    {
        if(i%2!=0)
            arr[i]=*2;
        else
        {
          arr=arr[i]+10;
        }
        for(i=0;i<=4;i++){
       printf("the final value is%d\n",arr[i]);
    }
}

