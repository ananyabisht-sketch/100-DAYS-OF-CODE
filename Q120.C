//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);  // read full line including spaces

    
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

     for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            s[i] = toupper(s[i]);
            break;
        }
    }

    printf("%s", s);

    return 0;
}
