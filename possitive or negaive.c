#include<stdio.h>
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    if(n>0)
        printf("possitive number%d\n",n);

    else if (n<0)
        printf("negative number%d\n",n);
    else
        printf("zero%d\n",n);
    return 0;
}

