#include <stdio.h>

int main() {
    char text[100];
    int shift;
    scanf("%s", text);
    scanf("%d", &shift);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' + shift) % 26) + 'A';
        }
    }

    printf("Encrypted: %s\n", text);
    return 0;
}
