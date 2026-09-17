/*
 * Name : Sanika
 * Roll : 590042652
 * Day : 07 Question: 1
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input a year and check whether it is a leap year
 * or not using conditional statements.
 * A year is a leap year if divisible by 4 but not 100,
 * except if divisible by 400.
*/
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}
