//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char text[500];
    fgets(text, 500, stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
    }

    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error: could not open file");
        return 0;
    }

    fprintf(fp, "\n%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.");
    return 0;
}