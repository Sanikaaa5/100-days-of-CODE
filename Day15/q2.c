x/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 15 Question: 2
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to reverse a given number.
 */
#include <stdio.h>

int main()
{
    int n, digit;
    int reverse = 0;

    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}
