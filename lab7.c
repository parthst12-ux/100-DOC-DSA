#include <stdio.h>
#include <time.h>

int main() {
    int n, i;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter the number of times to print UPES: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

  
    start = clock();

  
    for (i = 1; i <= n; i++) {
        printf("UPES\n");
    }

    end = clock();

   
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Total execution time: %f seconds\n", cpu_time_used);

    return 0;
}