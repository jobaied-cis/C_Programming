#include <stdio.h>

int main() {
    int arr[100], n, value, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    // Find the position of the value
    for(int i = 0; i < n; i++) {
        if(arr[i] == value) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Element not found!\n");
    } else {
        // Shift elements to left
        for(int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce array size

        printf("Array after deletion:\n");
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

