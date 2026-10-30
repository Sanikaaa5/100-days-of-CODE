/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 50  Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */

#include <stdio.h>

int main() {
    char date[20];

    scanf("%s", date);

    printf("%c%c-Apr-%c%c%c%c",
           date[0], date[1],
           date[6], date[7], date[8], date[9]);

    return 0;
}
