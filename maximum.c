#include<stdio.h>
int main()
{
    int n1,n2,n3,max;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
        printf("max is:n1");
    else if(n2>n1&&n2>n3)
       printf("max is:n2");
    else if(n3>n1&&n3>n1)
       printf("max is:n3");
       else
            printf("equal\n");
return 0;

}

