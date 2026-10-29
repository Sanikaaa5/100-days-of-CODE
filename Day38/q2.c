/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 38  Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Check if a matrix is symmetric.
 */

#include <stdio.h>

int main() {
    int a[10][10], n, i, j, symmetric = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
            }
        }
    }

    if (symmetric == 1) {
        printf("Symmetric");
    } else {
        printf("Not symmetric");
    }

    return 0;
}
