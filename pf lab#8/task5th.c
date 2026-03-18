#include <stdio.h>

int main() {

    int mat[5][5], mat2[5][5];
    int rows, cols;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nYour Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matrix Type Analysis ---\n");

    if(rows == cols) {
        printf("Square Matrix\n");
    }

    if(rows != cols) {
        printf("Rectangular Matrix\n");
    }

    if(rows == 1) {
        printf("Row Matrix\n");
    }

    if(cols == 1) {
        printf("Column Matrix\n");
    }

    int isZero = 1;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(mat[i][j] != 0) {
                isZero = 0;
            }
        }
    }
    if(isZero) {
        printf("Zero Matrix\n");
        printf("Null Matrix\n");
    }

    if(rows == cols) {
        int n = rows;

        int isIdentity = 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(i == j && mat[i][j] != 1) isIdentity = 0;
                if(i != j && mat[i][j] != 0) isIdentity = 0;
            }
        }
        if(isIdentity) printf("Identity Matrix\n");

        int isDiagonal = 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(i != j && mat[i][j] != 0) isDiagonal = 0;
            }
        }
        if(isDiagonal) printf("Diagonal Matrix\n");

        int isScalar = isDiagonal;
        if(isDiagonal) {
            for(i = 1; i < n; i++) {
                if(mat[i][i] != mat[0][0]) isScalar = 0;
            }
        }
        if(isScalar) printf("Scalar Matrix\n");

        int isUpper = 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(i > j && mat[i][j] != 0) isUpper = 0;
            }
        }
        if(isUpper) printf("Upper Triangular Matrix\n");

        int isLower = 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(i < j && mat[i][j] != 0) isLower = 0;
            }
        }
        if(isLower) printf("Lower Triangular Matrix\n");

        int isSymmetric = 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(mat[i][j] != mat[j][i]) isSymmetric = 0;
            }
        }
        if(isSymmetric) printf("Symmetric Matrix\n");

        int isSkew = 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(mat[i][j] != -mat[j][i]) isSkew = 0;
            }
        }
        if(isSkew) printf("Skew-Symmetric Matrix\n");

        if(n == 2) {
            int det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
            if(det == 0) printf("Singular Matrix (det = 0)\n");
            else printf("Non-Singular Matrix (det = %d)\n", det);
        }
        if(n == 3) {
            int det = mat[0][0]*(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1])
                    - mat[0][1]*(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0])
                    + mat[0][2]*(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
            if(det == 0) printf("Singular Matrix (det = 0)\n");
            else printf("Non-Singular Matrix (det = %d)\n", det);
        }
    }


    int rows2, cols2;
    char ch;
    printf("\nCompare with another matrix? (y/n): ");
    scanf(" %c", &ch);

    if(ch == 'y' || ch == 'Y') {
        printf("Enter rows and cols of second matrix: ");
        scanf("%d %d", &rows2, &cols2);

        printf("Enter second matrix elements:\n");
        for(i = 0; i < rows2; i++) {
            for(j = 0; j < cols2; j++) {
                printf("mat2[%d][%d] = ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }

        if(rows != rows2 || cols != cols2) {
            printf("Matrices are Not Equal (different dimensions)\n");
        } else {
            int isEqual = 1;
            for(i = 0; i < rows; i++) {
                for(j = 0; j < cols; j++) {
                    if(mat[i][j] != mat2[i][j]) isEqual = 0;
                }
            }
            if(isEqual) printf("Equal Matrices\n");
            else printf("Matrices are Not Equal\n");
        }
    }

    return 0;
}