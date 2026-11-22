/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 59  Question: 1
 * Date : 21-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an integer array arr and an integer k as inputs.
 * Print the maximum sum of all the subarrays of size k.
 */

#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i, j, product;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        product = 1;

        for (j = 0; j < n; j++) {
            if (j != i) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
