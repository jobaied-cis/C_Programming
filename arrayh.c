#include<stdio.h>
int main()
{
    int marks[5],i,sum=0;
    printf("Enter any numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);

    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    printf("sum is %d\n",sum);
    printf("avg is %0.2f\n",(float)sum/5);
    return 0;


}
