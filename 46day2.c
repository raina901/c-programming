//Q92: Find the first repeating lowercase alphabet in a string.


#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    int freq[26] = {0}; 
    char firstRepeating = '\0'; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2 && firstRepeating == '\0') {
                firstRepeating = str[i];
            }
        }
    }

    if (firstRepeating != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeating);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}