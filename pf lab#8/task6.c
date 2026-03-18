#include <stdio.h>

int main() {

    int a[3][3], b[3][3], result[3][3];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // validation
    if(c1 != r2) {
        printf("\nMultiplication not possible.\n");
        printf("Columns of A (%d) must equal Rows of B (%d)\n", c1, r2);
        return 0;
    }

    if(r1 > 3 || c1 > 3 || r2 > 3 || c2 > 3) {
        printf("\nSize exceeds 3x3 limit.\n");
        return 0;
    }

    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // display matrix a
    printf("\nMatrix A (%dx%d):\n", r1, c1);
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // display matrix b
    printf("\nMatrix B (%dx%d):\n", r2, c2);
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // display result
    printf("\nResult A x B (%dx%d):\n", r1, c2);
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}