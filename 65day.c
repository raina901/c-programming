//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>

int main() {
    char s[1000], t[1000];
    scanf("%s", s);
    scanf("%s", t);

    int n1 = 0, n2 = 0;
    while (s[n1] != '\0') n1++;
    while (t[n2] != '\0') n2++;

    if (n1 != n2) {
        printf("Not Anagram");
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; i < n1; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagram");
    } else {
        printf("Not Anagram");
    }
    return 0;
}