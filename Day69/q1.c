/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 69  Question: 1
 * Date : 24-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an integer array as input. Only one element will be repeated.
 * Print the repeated element. Try to find the result in one single iteration.
 */

#include <stdio.h>

int main() {
    int arr[100];
    int seen[201] = {0};
    int values[201];
    int n, i, place;
    int repeated = 0, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (found == 0) {
            place = arr[i] % 201;

            if (place < 0) {
                place = place + 201;
            }

            while (seen[place] == 1 && values[place] != arr[i]) {
                place = (place + 1) % 201;
            }

            if (seen[place] == 1) {
                repeated = arr[i];
                found = 1;
            } else {
                seen[place] = 1;
                values[place] = arr[i];
            }
        }
    }

    if (found == 1) {
        printf("%d", repeated);
    } else {
        printf("-1");
    }

    return 0;
}
