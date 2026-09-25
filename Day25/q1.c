/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 25 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
   5
   45
   345
   2345
   12345
 */


#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
