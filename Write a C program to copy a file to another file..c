#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[] = "source.txt"; // Replace with the name of your source file
    char destinationFilename[] = "destination.txt"; // Replace with the name of your destination file
    char ch;

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceFilename, destinationFilename);

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
