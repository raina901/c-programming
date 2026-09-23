//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    getchar(); 
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}