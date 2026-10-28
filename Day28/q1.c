/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 28  Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Print all prime numbers from 1 to n
 */

#include <stdio.h>

int main() {
    int n, number, divisor, prime;

    scanf("%d", &n);

    for (number = 2; number <= n; number++) {
        prime = 1;

        for (divisor = 2; divisor < number; divisor++) {
            if (number % divisor == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1) {
            printf("%d ", number);
        }
    }

    return 0;
}
