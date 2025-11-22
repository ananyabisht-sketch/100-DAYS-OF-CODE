//Write a function that accepts a structure as parameter and prints its members.


#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};


void printStudent(struct Student s);

int main() {
    struct Student st;

    printf("Enter student's name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll_no);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    
    printStudent(st);

    return 0;
}


void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);
}
