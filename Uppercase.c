
#include <stdio.h>

int main() {
    char c;

    // Ask user for a character
    printf("Enter a character: ");
    scanf(" %c", &c);

    // Check if character is uppercase
    if (c >= 'A' && c <= 'Z') {
        printf("%c is an uppercase letter.\n", c);
    } else {
        printf("%c is not an uppercase letter.\n", c);
    }

    return 0;
}

