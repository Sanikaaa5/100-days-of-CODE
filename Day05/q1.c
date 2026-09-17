/*
gcc  * Name : Sanika
 * Roll : 590042652
 * Day : 05 Question: 1
 * Date : 18-09-2026
 *


 * PROBLEM STATEMENT:
 * Write a program to calculate simple and compound interest
 for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * ((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f", compoundInterest);

    return 0;
}
