/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 20 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the 1’s complement of a binary number and
 * print it. 
*/

#include <stdio.h>

int main()
{
    int n, digit;
    int result = 0;
    int place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }

        result = result + digit * place;
        place = place * 10;

        n = n / 10;
    }

    printf("1's Complement = %d", result);

    return 0;
}
