#include <stdio.h>

int main() {

    float mat[3][3] = {
        {2, 1, 3},
        {0, 4, 1},
        {5, 2, 6}
    };

    float trans[3][3], cofactor[3][3], adj[3][3], inv[3][3];
    float det;
    int i, j;

    printf("Original Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", mat[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            trans[i][j] = mat[j][i];
        }
    }
    printf("\nTranspose:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", trans[i][j]);
        }
        printf("\n");
    }

    det = mat[0][0] * (mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1])
        - mat[0][1] * (mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0])
        + mat[0][2] * (mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);

    printf("\nDeterminant = %.2f\n", det);

    cofactor[0][0] =  (mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]);
    cofactor[0][1] = -(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]);
    cofactor[0][2] =  (mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);

    cofactor[1][0] = -(mat[0][1]*mat[2][2] - mat[0][2]*mat[2][1]);
    cofactor[1][1] =  (mat[0][0]*mat[2][2] - mat[0][2]*mat[2][0]);
    cofactor[1][2] = -(mat[0][0]*mat[2][1] - mat[0][1]*mat[2][0]);

    cofactor[2][0] =  (mat[0][1]*mat[1][2] - mat[0][2]*mat[1][1]);
    cofactor[2][1] = -(mat[0][0]*mat[1][2] - mat[0][2]*mat[1][0]);
    cofactor[2][2] =  (mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0]);

    printf("\nCofactor Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", cofactor[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            adj[i][j] = cofactor[j][i];
        }
    }
    printf("\nAdjoint Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", adj[i][j]);
        }
        printf("\n");
    }

    if(det == 0) {
        printf("\nInverse does not exist (determinant is 0)\n");
    } else {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                inv[i][j] = adj[i][j] / det;
            }
        }
        printf("\nInverse Matrix:\n");
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("%.2f\t", inv[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
