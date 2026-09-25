//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
int main() {
    char str[100], longest[100];
    int i, length = 0, maxLength = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        } else {
            if (length > maxLength) {
                maxLength = length;
                strncpy(longest, &str[i - length], length);
                longest[length] = '\0';
            }
            length = 0;
        }
    }
    if (length > maxLength) {
        maxLength = length;
        strncpy(longest, &str[i - length], length);
        longest[length] = '\0';
    }

    printf("Longest word: %s\n", longest);
    return 0;
}