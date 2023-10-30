#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "sample.txt";
    char ch;
    int charCount = 0;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        charCount++;
    }
    fclose(file);
    printf("Number of characters in the file '%s' is: %d\n", filename, charCount);
    return 0;
}

