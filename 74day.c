//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char srcName[100], destName[100];
    scanf("%s", srcName);
    scanf("%s", destName);

    FILE *src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error: source file not found");
        return 0;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: could not create destination file");
        fclose(src);
        return 0;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destName);
    return 0;
}