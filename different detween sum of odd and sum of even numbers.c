#include<stdio.h>
int main()
{
    int arr[5]={2,3,4,5,6},i;
    int evensum=0;
    int oddsum=0;
    for(i=0;i<=4;i++)
    {
        if(i%2==0)
            evensum=arr[i]+evensum;
        else

          oddsum=arr[i]+oddsum;
    }
int res=evensum-oddsum;
       printf("%d\n",res);
    }



