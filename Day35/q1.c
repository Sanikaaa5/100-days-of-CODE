/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 35 Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the second largest element in an array.
 */

#include <stdio.h>

int main() {
    int a[100], n, i, largest, second, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] < largest) {
            if (found == 0 || a[i] > second) {
                second = a[i];
                found = 1;
            }
        }
    }

    if (found == 1) {
        printf("Second largest = %d", second);
    } else {
        printf("There is no second largest element");
    }

    return 0;
}
