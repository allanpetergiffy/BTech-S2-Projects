//4 FREQUENCY OF EACH CHARACTER (IGNORE CASE , ONLY ALPHABETS)

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // Array to store frequency of each letter
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads entire line including spaces

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Count only alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    // Print frequencies
    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}

