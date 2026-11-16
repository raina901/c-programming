//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTop(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }
    return s[top];
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }

    struct Student best = findTop(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d", best.name, best.roll_no, best.marks);
    return 0;
}