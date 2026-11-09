//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum Color { RED, YELLOW, GREEN, COLOR_COUNT };

int main() {
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i < COLOR_COUNT; i++) {
        printf("%s=%d\n", names[i], i);
    }
    return 0;
}