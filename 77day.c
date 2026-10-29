//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found");
        return 0;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: could not create output.txt");
        fclose(in);
        return 0;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Done. Check output.txt");
    return 0;
}