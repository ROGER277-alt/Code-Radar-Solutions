#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start, end, len;
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);
    end = len;

    // Scan from end to start
    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            start = i + 1;
            while (start < end)
                putchar(str[start++]);
            putchar(' ');
            end = i;
        }
    }

    // Print the first word
    start = 0;
    while (start < end)
        putchar(str[start++]);

    putchar('\n');
    return 0;
}