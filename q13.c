#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
 printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j)               // primary diagonal
                sum += a[i][j];
            else if(i + j == n - 1)  // secondary diagonal
                sum += a[i][j];
        }
    }
    printf("Sum of diagonals = %d", sum);

    return 0;
}
