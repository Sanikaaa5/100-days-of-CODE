/*
 * Name : Sanika
 * Roll : 590042652
 * Day : 15 Question: 1
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the factorial of a number.
 */
#include <stdio.h>

int main()
{
    int n, i, factorial = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%d", factorial);

    return 0;
}
