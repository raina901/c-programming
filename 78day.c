//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: file not found");
        return 0;
    }

    int vowels = 0, consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        // capital to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // only letters are counted
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}