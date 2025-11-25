//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp, emp_read;
    FILE *fp;

  fp = fopen("employee.dat", "wb");   
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);   
    fclose(fp);

    
    fp = fopen("employee.dat", "rb");   
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(emp_read), 1, fp);
    fclose(fp);
    printf("\n--- Employee Details Read from File ---\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);

    return 0;
}

