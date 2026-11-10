/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 55  Question: 1
 * Date : 10-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take an integer array nums of size n, and print the majority element.
 * The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
 * Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 
 */

#include <stdio.h>

int main() {
    int nums[100], n, i, j;
    int count, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            printf("%d", nums[i]);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}
