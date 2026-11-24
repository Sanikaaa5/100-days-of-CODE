/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 67  Question: 1
 * Date : 23-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take two sorted arrays of size m and n as input.
 * Merge both the arrays such that the merged array is also sorted. Print the merged array. 
 */

#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int m, n, i = 0, j = 0, k = 0;

    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);

    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            merged[k] = a[i];
            i++;
        } else {
            merged[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = b[j];
        j++;
        k++;
    }

    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
