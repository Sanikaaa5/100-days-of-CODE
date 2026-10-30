/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 47  Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Check if two strings are anagrams of each other.
 */

#include <stdio.h>

int main() {
    char first[100], second[100];
    int count[26] = {0};
    int i, same = 1;

    scanf("%s", first);
    scanf("%s", second);

    for (i = 0; first[i] != '\0'; i++) {
        count[first[i] - 'a']++;
    }

    for (i = 0; second[i] != '\0'; i++) {
        count[second[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            same = 0;
        }
    }

    if (same == 1) {
        printf("Anagrams");
    } else {
        printf("Not anagrams");
    }

    return 0;
}
