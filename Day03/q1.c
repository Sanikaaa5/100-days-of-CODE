/*
 * Name : Sanika
 * Roll : 590042652
 * Day : 02 Question: 2
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to convert temperature from Celsius to Fahrenheit.
*/
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}
