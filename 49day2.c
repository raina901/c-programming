//Q98: Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char *str) {
    int start = 0, end = strlen(str) - 1;

    while (isspace((unsigned char)str[start])) start++;

    while (end >= start && isspace((unsigned char)str[end])) end--;

    int i = 0;
    while (start <= end) {
        str[i++] = str[start++];
    }
    str[i] = '\0';
}

int main() {
    char name[200];

    printf("Enter full name: ");
    if (!fgets(name, sizeof(name), stdin)) {
        printf("Error reading input.\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    trim(name);

    if (strlen(name) == 0) {
        printf("Name cannot be empty.\n");
        return 1;
    }

    char *words[50];
    int count = 0;
    char *token = strtok(name, " ");
    while (token != NULL && count < 50) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    if (count == 1) {
    
        printf("%s\n", words[0]);
        return 0;
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c.", toupper((unsigned char)words[i][0]));
    }

    printf(" %s\n", words[count - 1]);

    return 0;
}
