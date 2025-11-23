#include <stdio.h>
#include <stdlib.h>

int main() {
    char tame[50];
    FILE *file;

    // Prompt the user to enter their name
    printf("Hellow world 2025, Kans thirty years ..");
    printf("Enter your name: ");
    fgets(tame, sizeof(tame), stdin);

    // Open a file in write mode
    file = fopen("tame.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the name to the file
    fprintf(file, "Hello, %s", tame);

    // Close the file
    fclose(file);

    // Print a success message
    printf("Your name has been written to name.txt\n");

    return 0;
}