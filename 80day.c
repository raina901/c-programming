//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

#define MAX 100

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    int n, i;

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: could not open file for writing\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Student %d (name roll marks): ", i + 1);
        scanf("%49s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open file for reading\n");
        return 1;
    }

    printf("\n");
    while (fscanf(fp, "%49s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    return 0;
}