/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 24 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
   *
   **
   ***
   ****
   *****
 */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
