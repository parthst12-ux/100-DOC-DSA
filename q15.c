#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;  
    int temp[n];

    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    printf("Rotated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
