#include<stdio.h>
int main()
{
    float arr[5]={10.5,20.5,30.4,40.3,40.4},i,max;
    max=arr[0];
    for(i=0; i<=4; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
        printf("the maximum value is= %f\n",max);
    }



