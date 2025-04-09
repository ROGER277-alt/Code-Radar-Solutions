#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to reverse words in a string
void reverseWords(char *str) {
    char *words[100];  // Array to store pointers to words
    int count = 0;

    // Tokenize the string into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print words in reverse order
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char input[1000];

    
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline if present
    input[strcspn(input, "\n")] = 0;

    reverseWords(input);

    return 0;
}