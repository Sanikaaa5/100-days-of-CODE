/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 16 Question: 1
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a number as input and print its equivalent 
 * binary represention.

 */

#include <stdio.h>

int main()
{
    int n, binary[32], i = 0, j;

    scanf("%d", &n);

    if(n == 0)
    {
        printf("0");
        return 0;
    }

    while(n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}
