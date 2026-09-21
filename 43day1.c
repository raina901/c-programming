//Q85: Reverse a string.


#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}