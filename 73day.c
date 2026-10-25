//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error: file not found");
        return 0;
    }

    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    int ch, last = '\n';

    while ((ch = fgetc(fp)) != EOF) {
        if (ch != '\n') {
            chars++;
        } else {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
        last = ch;
    }

    if (last != '\n') {
        lines++;
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}