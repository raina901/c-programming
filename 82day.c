//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    char input[20];
    enum Light light;

    printf("Enter light (RED/YELLOW/GREEN): ");
    scanf("%19s", input);

    if (strcmp(input, "RED") == 0)         light = RED;
    else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)  light = GREEN;
    else {
        printf("Invalid input\n");
        return 1;
    }

    switch (light) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n");   break;
    }

    return 0;
}