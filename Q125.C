//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
int main() {
    char filename[100];
    char text[500];
    FILE *fp;

     printf("Enter filename: ");
    scanf("%s", filename);
    getchar();  // consume leftover newline

   
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

     printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

   
    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
