//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fpIn, *fpOut;
    int ch;

   
   fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

   
    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fpIn);
        return 1;
    }

    
    while ((ch = fgetc(fpIn)) != EOF) {
       
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fpOut);
    }

    fclose(fpIn);
    fclose(fpOut);

    printf("Conversion complete! Check output.txt\n");

    return 0;
}
