/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 21 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap the first and last digit of a number.
 */

#include <stdio.h>

int main()
{
    int n, original;
    int first, last;
    int divisor = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
        divisor = divisor * 10;
    }

    first = n;

    middle = (original % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("After swapping = %d", result);

    return 0;
}
