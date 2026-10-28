/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 29  Question: 2
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the maximum and minimum element in an array.
 */

#include <stdio.h>

int main() {
    int a[100], n, i, maximum, minimum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    maximum = a[0];
    minimum = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > maximum) {
            maximum = a[i];
        }

        if (a[i] < minimum) {
            minimum = a[i];
        }
    }

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d", minimum);

    return 0;
}
