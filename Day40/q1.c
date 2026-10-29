/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 40  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Perform diagonal traversal of a matrix.
 */

#include <stdio.h>

int main() {
    int a[10][10], rows, columns;
    int i, j, diagonal;

    scanf("%d%d", &rows, &columns);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (diagonal = 0; diagonal < rows + columns - 1; diagonal++) {
        for (i = 0; i < rows; i++) {
            j = diagonal - i;

            if (j >= 0 && j < columns) {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
