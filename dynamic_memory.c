#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 200

void displayNotes(char **titles, char **contents, int count) {
    printf("Notes:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, titles[i]);
        printf("   %s\n", contents[i]);
    }
}

int main() {
    int n;

    printf("Enter the number of notes: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    char **titles = (char **)malloc(n * sizeof(char *));
    char **contents = (char **)malloc(n * sizeof(char *));

    for (int i=0;i<n;i++) {
        printf("Enter title for note %d: ", i + 1);
        fgets(titles[i], MAX_SIZE, stdin);
        titles[i][strcspn(titles[i], "\n")] = '\0'; // Remove newline character

        printf("Enter content for note %d: ", i + 1);
        fgets(contents[i], MAX_SIZE, stdin);
        contents[i][strcspn(contents[i], "\n")] = '\0'; // Remove newline character
    }

    displayNotes(titles, contents, n);

    FILE *fptr = fopen("notes.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fptr, "Title: %s\n", titles[i]);
        fprintf(fptr, "Content: %s\n\n", contents[i]);
    }
    fclose(fptr);

    printf("Notes saved to notes.txt\n");

    // read from file and display

    fptr = fopen("notes.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char line[MAX_SIZE];
    printf("\nReading from file:\n");

    while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }
    fclose(fptr);


    // keyword search

    char keyword[MAX_SIZE];
    int found = 0;

    printf("\nEnter a keyword to search in notes: ");
    fgets(keyword, MAX_SIZE, stdin);
    keyword[strcspn(keyword, "\n")] = '\0'; // Remove newline character

    printf("Search results\n");

    for (int i=0;i<n;i++){
        if (strstr(titles[i], keyword) != NULL || strstr(contents[i], keyword) != NULL) {
            printf("%d. %s\n", i + 1, titles[i]);
            printf("   %s\n", contents[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No notes found containing the keyword.\n");
    }
   // free allocated memory
    for (int i = 0; i < n; i++) {
        free(titles[i]);
        free(contents[i]);
    }

    free(titles);
    free(contents);

    printf("\nMemory freed successfully.\n");
    return 0;
}