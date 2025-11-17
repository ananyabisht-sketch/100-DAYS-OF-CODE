Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes, seconds;
    scanf("%d", &totalSeconds);
     hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

     printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}
