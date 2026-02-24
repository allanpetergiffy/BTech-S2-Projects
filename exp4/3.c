//3.c COunt vowels and consonants in a string 

#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word (no spaces)

    // Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase for simplicity
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check if alphabet and not vowel → consonant
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

