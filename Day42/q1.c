/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 42  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Count vowels and consonants in a string.
 */

#include <stdio.h>

int main() {
    char text[100], letter;
    int i = 0, vowels = 0, consonants = 0;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        letter = text[i];

        if (letter >= 'A' && letter <= 'Z') {
            letter = letter + 32;
        }

        if (letter >= 'a' && letter <= 'z') {
            if (letter == 'a' || letter == 'e' || letter == 'i' ||
                letter == 'o' || letter == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}
