/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 21 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is a perfect number.
 */

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }

    return 0;
}
