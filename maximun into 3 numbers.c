#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
        printf("maximum is %d\n",a);
     else if(b>=a&&b>=c)
        printf("maximum is %d\n",b);
         else if(c>=a&&c>=b)
        printf("maximum is %d\n",c);
        else
            printf("the number is equal\n");
        return 0;
}
