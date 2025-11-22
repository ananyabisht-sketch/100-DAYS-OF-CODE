//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    printf("Select Role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Greetings, Guest! You have view-only access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
