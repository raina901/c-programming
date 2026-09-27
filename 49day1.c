//Q97: Print the initials of a name.


#include <stdio.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;
    while (name[i] != '\0') {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", name[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}