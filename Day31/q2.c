/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 31  Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Reverse an array without taking extra space.
 */

#include <stdio.h>

int main() {
    int a[100], n, i, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
