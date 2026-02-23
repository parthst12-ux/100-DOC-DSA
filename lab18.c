#include <stdio.h>
#include <time.h>

int main() {
    int arr[100], n, i, key;
    int low, high, mid;
    int found = 0, comparisons = 0;
    clock_t start, end;
    double cpu_time;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100) {
        printf("Invalid input\n");
        return 0;
    }
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    start = clock();
    while(low <= high) {
        comparisons++;
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

   
    end = clock();

    if(found)
        printf("Element found at index %d\n", mid);
    else
        printf("Element Not found\n");

    printf("Total comparisons made: %d\n", comparisons);

    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", cpu_time);

    return 0;
}