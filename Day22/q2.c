/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 22 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of the series: 1 + 3/4 + 5/6 
 * + 7/8 + … up to n terms.
 */

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Sum = %.2f", sum);

    return 0;
}
