/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 61  Question: 1
 * Date : 23-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. 
 * Print the results separated by spaces as output.
 */

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;
    int firstNegative, found;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        found = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                found = 1;
                break;
            }
        }

        if (i > 0) {
            printf(" ");
        }

        if (found == 1) {
            printf("%d", firstNegative);
        } else {
            printf("0");
        }
    }

    return 0;
}
