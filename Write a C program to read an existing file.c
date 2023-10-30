#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "sample.txt";
    char ch;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Contents of the file '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}

