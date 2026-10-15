//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>

int main() {
    char s[1000];
    scanf("%s", s);

    
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }

    int max = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0};   
        int len = 0;

        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break;         
            }
            seen[(unsigned char)s[j]] = 1;
            len++;
        }

        if (len > max) {
            max = len;
        }
    }

    printf("%d", max);
    return 0;
}