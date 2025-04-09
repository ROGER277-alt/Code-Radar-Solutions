#include <stdio.h>

int main() {
    char text[100];
    int i, shift;

    printf("Enter UPPERCASE text: ");
    scanf("%s", text);

    printf("Enter shift: ");
    scanf("%d", &shift);

    for (i = 0; text[i] != '\0'; i++) {
        text[i] = ((text[i] - 'A' + shift) % 26) + 'A';
    }

    printf("Encrypted: %s\n", text);
    return 0;
}
