#include <stdio.h>

int main() {
    int a[100][100];
    int rows, cols;
    int i, j;
    int flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols) {
        printf("Not Symmetric Matrix");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}
