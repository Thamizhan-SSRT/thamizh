#include <stdio.h>

int main() {
    int a[10][10], i, j, n, m;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Printing the matrix
    printf("Matrix is: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}