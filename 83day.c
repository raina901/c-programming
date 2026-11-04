//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    const char *names[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };
    char input[10];
    int m, found = 0;

    printf("Enter month (e.g. FEB): ");
    scanf("%9s", input);

    for (m = JAN; m <= DEC; m++) {
        if (strcmp(input, names[m]) == 0) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid month\n");
        return 1;
    }

    switch ((enum Month)m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
    }

    return 0;
}