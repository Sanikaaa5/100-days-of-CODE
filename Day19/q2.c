/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 19 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of digits of a number.
 */

#include <stdio.h>

int main()
{
    int n, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
