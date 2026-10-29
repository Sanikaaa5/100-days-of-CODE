/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 32  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Merge two arrays.
 */
#include <stdio.h>

int main() {
    int a[100], b[100], n, m, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    for (i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
