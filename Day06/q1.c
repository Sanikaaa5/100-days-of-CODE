/*
 * Name : Sanika
 * Roll : 590042652
 * Day : 06 Question: 1
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input an integer and check whether
 * it is even or odd using if-else.
*/
#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}
