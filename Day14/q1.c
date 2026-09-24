/*
 * Name : Sanika
 * Roll : 590042652
 * Day : 14 Question: 1
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print numbers from 1 to n.
 */
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= 2 * n - 1; i = i + 2)
    {
        sum = sum + i;
    }

    printf("Sum of first %d odd numbers = %d", n, sum);

    return 0;
}



