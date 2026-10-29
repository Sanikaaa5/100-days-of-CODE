/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 33 Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Insert an element in a sorted array at the appropriate position.
 */

#include <stdio.h>

int main() {
    int a[101], n, number, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &number);

    i = n - 1;

    while (i >= 0 && a[i] > number) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = number;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
