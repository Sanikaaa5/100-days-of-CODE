/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 34  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Insert an element in an array at a given position.
 */

#include <stdio.h>

int main() {
    int a[101], n, number, position, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d%d", &number, &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }

    a[position - 1] = number;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
