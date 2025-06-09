#include<stdio.h>
void calculatepower(double base,double exp);
{
 double result =1,i;
 for(i=1;i<=exp,i++)
 {
     result=result*base;
 }
 printf("0.1%f\n",result);
}
int main()
{
    int num1,num2;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    int result = calculatepower(num1,num2);

}

