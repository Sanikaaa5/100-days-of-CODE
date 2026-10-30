/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 47  Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the longest word in a sentence.
 */

#include <stdio.h>

int main() {
    char sentence[200], word[100], longest[100];
    int i = 0, j, length, longestLength = 0;

    scanf(" %[^\n]", sentence);

    while (sentence[i] != '\0') {
        while (sentence[i] == ' ') {
            i++;
        }

        j = 0;

        while (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j] = sentence[i];
            j++;
            i++;
        }

        word[j] = '\0';
        length = j;

        if (length > longestLength) {
            longestLength = length;

            for (j = 0; j <= length; j++) {
                longest[j] = word[j];
            }
        }
    }

    printf("Longest word = %s", longest);

    return 0;
}
