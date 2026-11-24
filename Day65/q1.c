/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 65  Question: 1
 * Date : 23-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take two strings s and t as inputs (assume all characters are lowercase).
 * The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies.
 * Print "Anagram" if they are, otherwise "Not Anagram".
 */

#include <stdio.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};
    int i, anagram = 1;

    scanf("%99s", s);
    scanf("%99s", t);

    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            anagram = 0;
        }
    }

    if (anagram == 1) {
        printf("Anagram");
    } else {
        printf("Not Anagram");
    }

    return 0;
}
