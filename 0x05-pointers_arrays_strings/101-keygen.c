#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: always 0(success)
 */

#define PASSWORD_LENGTH 10

int main() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+-=";
    const size_t charset_size = sizeof(charset) - 1;
    char password[PASSWORD_LENGTH + 1];
    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_size];
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);
    return 0;
}
