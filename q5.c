#include <stdio.h>

int main() {
    int a[100], n, key;
    int i, comp = 0, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        comp++;  

        if(a[i] == key) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Element found at position %d\n", i + 1);
    } else {
        printf("Element not found\n");
    }

    printf("Total Comparisons = %d", comp);

    return 0;
}
