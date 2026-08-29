//Q40: Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char binary[100];
    int i, valid = 1;

    // Input binary number as string
    printf("Enter a binary number: ");
    if (scanf("%99s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate input: only '0' and '1' allowed
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Error: Input must contain only 0s and 1s.\n");
        return 1;
    }

    // Find 1's complement by flipping bits
    for (i = 0; binary[i] != '\0'; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }

    // Output result
    printf("1's Complement: %s\n", binary);

    return 0;
}
