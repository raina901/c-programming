//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void printStudent(struct Student st) {
    printf("Name: %s | Roll: %d | Marks: %d", st.name, st.roll_no, st.marks);
}

int main() {
    struct Student s;

    scanf("%s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%d", &s.marks);

    printStudent(s);
    return 0;
}