//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);      

    for (int i = 0; s[i] != '\0'; i++) {
        
        if (i == 0 || s[i - 1] == ' ') {
        
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;   
            }
        }
    }

    printf("%s", s);
    return 0;
}