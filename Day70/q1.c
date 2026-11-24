/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 70  Question: 1
 * Date : 24-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a string input. Change it to sentence case.
 */


#include <stdio.h>

int main() {
    char text[200];
    int i = 0, firstLetter = 1;

    scanf("%199[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            if (firstLetter == 1) {
                firstLetter = 0;
            } else {
                text[i] = text[i] + 32;
            }
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            if (firstLetter == 1) {
                text[i] = text[i] - 32;
                firstLetter = 0;
            }
        }

        i++;
    }

    printf("%s", text);

    return 0;
}

