/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 48  Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Reverse each word in a sentence without changing the word order.
 */

#include <stdio.h>

int main() {
    char text[100], temp;
    int i = 0, start = 0, end;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] == ' ') {
            end = i - 1;

            while (start < end) {
                temp = text[start];
                text[start] = text[end];
                text[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        i++;
    }

    end = i - 1;

    while (start < end) {
        temp = text[start];
        text[start] = text[end];
        text[end] = temp;

        start++;
        end--;
    }

    printf("%s", text);

    return 0;
}
