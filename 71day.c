//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main() {
    char name[100];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    FILE *fp;
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error: could not create file");
        return 0;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");
    return 0;
}