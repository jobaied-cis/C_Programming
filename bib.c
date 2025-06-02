#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>b)
        printf("maximum number is %d\n",a);
    else if(b>a&&b>c)
        printf("maximum number is %d\n",b);
    else
        printf("maximum number is %d\n",c);
        return 0;

}

