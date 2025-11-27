//Use malloc() to allocate structure memory dynamically and print details.


#include <stdio.h>
#include <stdlib.h> 
// Required for malloc()

struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
   
    struct Student *ptr;
     ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

  
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

   
    free(ptr);

    return 0;
}


