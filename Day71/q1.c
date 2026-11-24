/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 71  Question: 1
 * Date : 24-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf().
 * After writing, display a message confirming that the data was successfully saved.
 */

#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Could not create the file");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data saved successfully");

    return 0;
}
