/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 54  Question: 1
 * Date : 10-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
 * Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
 
 */

#include <stdio.h>

int main() {
    int n, x;
    int left = 0, right, found = 0;

    scanf("%d", &n);

    right = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        left = left + x;

        if (left == right) {
            printf("%d", x);
            found = 1;
            break;
        }

        right = right - x;
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}
