/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 38 Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Add two matrices.
 */

#include <stdio.h>

int main() {
    int a[10][10], b[10][10];
    int rows, columns, i, j;

    scanf("%d%d", &rows, &columns);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
