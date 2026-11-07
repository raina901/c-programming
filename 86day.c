//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    int a, b;
    enum Menu choice;

    printf("Enter operation and two numbers (e.g. ADD 10 20): ");
    if (scanf("%19s %d %d", op, &a, &b) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    if (strcmp(op, "ADD") == 0)           choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0) choice = MULTIPLY;
    else {
        printf("Invalid operation\n");
        return 1;
    }

    switch (choice) {
        case ADD:      printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }

    return 0;
}