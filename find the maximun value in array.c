#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50},i,max;
    max=arr[0];
    for(i=0; i<=4; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
        printf("the maximum value is= %d\n",max);
    }


