//Create an enum for months and print how many days each month has.

#include <stdio.h>
enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month m;

    printf("Month\t\tDays\n");
    printf("---------------------\n");

    for (m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case JANUARY:   printf("January\t\t31\n"); break;
            case FEBRUARY:  printf("February\t28\n"); break;  // For non-leap year
            case MARCH:     printf("March\t\t31\n"); break;
            case APRIL:     printf("April\t\t30\n"); break;
            case MAY:       printf("May\t\t31\n"); break;
            case JUNE:      printf("June\t\t30\n"); break;
            case JULY:      printf("July\t\t31\n"); break;
            case AUGUST:    printf("August\t\t31\n"); break;
            case SEPTEMBER: printf("September\t30\n"); break;
            case OCTOBER:   printf("October\t\t31\n"); break;
            case NOVEMBER:  printf("November\t30\n"); break;
            case DECEMBER:  printf("December\t31\n"); break;
        }
    }

    return 0;
}
