#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "sample.txt";
    char information[] = "This is some information that we want to store in the file.\n";
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    fprintf(file, "%s", information);
    fclose(file);
    printf("Information has been written to the file.\n");
    return 0;
}

