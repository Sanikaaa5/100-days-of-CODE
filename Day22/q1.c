/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 22 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is a strong number.
 */

#include <stdio.h>

int main()
{
    int n, original, digit;
    int i, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0)
    {
        digit = n % 10;

        factorial = 1;

        for(i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        n = n / 10;
    }

    if(sum == original)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }

    return 0;
}
