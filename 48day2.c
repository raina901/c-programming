//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);


    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char *wordStart = NULL;
    for (int i = 0; i <= strlen(str); i++) {
        if (!isspace(str[i]) && wordStart == NULL) {
            wordStart = &str[i];
        }
        if ((isspace(str[i]) || str[i] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = NULL;
        }
    }

    printf("Output: %s\n", str);
    return 0;
}
