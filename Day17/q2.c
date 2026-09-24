/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 17 Question: 2
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is prime.
 */
#include <stdio.h>

int main()
{
    int n, i;
    int prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        prime = 0;
    }

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}
