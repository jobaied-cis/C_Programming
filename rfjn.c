#include<stdio.h>
int main()
 {
    int a[20], i, pos, value, n;
    printf("Enter array size: ");
    scanf("%d", &n); // Example: 5
    printf("Enter these values:\n");
    for(i = 1; i <=n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position where you want to delete (1 to %d): ",n);
    scanf("%d", &pos); // Example: 4
    printf("enter new value:");
    scanf("%d",&value);
   a [pos]=value;
    printf("After updating, the output is:\n");
    for(i = 1; i<=n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}



