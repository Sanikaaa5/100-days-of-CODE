/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 33 Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 *Search in a sorted array using binary search.
 */

#include <stdio.h>

int main() {
    int a[100], n, search, i;
    int low, high, middle, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        middle = (low + high) / 2;

        if (a[middle] == search) {
            found = 1;
            break;
        } else if (a[middle] < search) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    if (found == 1) {
        printf("Found at position %d", middle + 1);
    } else {
        printf("Not found");
    }

    return 0;
}
