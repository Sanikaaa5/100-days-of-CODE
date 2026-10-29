/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 37  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the sum of each row of a matrix and store it in an array.
 */

#include <stdio.h>

int main() {
    int a[10][10], rowSum[10];
    int rows, columns, i, j;

    scanf("%d%d", &rows, &columns);

    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        printf("%d\n", rowSum[i]);
    }

    return 0;
}
