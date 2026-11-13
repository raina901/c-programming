//Q142: Store details of 5 students in an array of structures and print all.


#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }

    printf("%-15s %-10s %-6s\n", "Name", "Roll", "Marks");
    printf("-------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-6d\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    return 0;
}