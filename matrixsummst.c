#include <stdio.h>

int main() {
    int r, c;
    int i, j;
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("Element [%d][%d]: ", r + 1, c + 1);
            scanf("%d", &matrix2[r][c]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
