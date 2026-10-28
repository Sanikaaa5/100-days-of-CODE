/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 29  Question: 1
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 *Find the sum of array elements.
 */

#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}

