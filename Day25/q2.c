/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 25 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
   *****
    ****
     ***
      **
       *
 */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
