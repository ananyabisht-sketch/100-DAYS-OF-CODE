//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 
#include <stdio.h>
int main() {
    char source[100], dest[100];
    FILE *fpSrc, *fpDest;
    int ch;

   
    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    fpSrc = fopen(source, "r");
    if (fpSrc == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    
    fpDest = fopen(dest, "w");
    if (fpDest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(fpSrc);
        return 1;
    }

    
    while ((ch = fgetc(fpSrc)) != EOF) {
        fputc(ch, fpDest);
    }

    
    fclose(fpSrc);
    fclose(fpDest);

    printf("File copied successfully!\n");

    return 0;
}
