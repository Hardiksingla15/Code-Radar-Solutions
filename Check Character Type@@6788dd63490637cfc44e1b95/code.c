#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if it's a digit
    if (isdigit(ch)) {
        printf("Digit\n");
    }
    // Check if it's a letter
    else if (isalpha(ch)) {
        // Convert to lowercase for easy comparison
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // If not a digit or letter, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
