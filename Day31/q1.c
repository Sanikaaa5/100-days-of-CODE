/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 31 Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Search for an element in an array using linear search.
 */

#include <stdio.h>

int main() {
    int a[100], n, i, search, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Found at position %d", i + 1);
    } else {
        printf("Not found");
    }

    return 0;
}
