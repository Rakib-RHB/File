#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "sample.txt";
    char ch;
    int lineCount = 0;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }
    fclose(file);
    if (lineCount > 0 || ch != '\n') {
        lineCount++;
    }
    printf("Number of lines in the file '%s' is: %d\n", filename, lineCount);
    return 0;
}

