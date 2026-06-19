#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], Diff[r][c];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Subtraction
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", Diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}