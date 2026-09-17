/*
 * Name : Sanika
 * Roll : 590042652
 * Day : 05 Question: 2
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input time in seconds and convert it
 * to hours:minutes:seconds format.
*/
#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}
