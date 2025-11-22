//Print all enum names and integer values using a loop.

#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST,
    TOTAL_ROLES   
};

int main() {
    enum UserRole role;
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("Enum Name\tInteger Value\n");
    printf("-------------------------------\n");

    for (role = ADMIN; role < TOTAL_ROLES; role++) {
        printf("%s\t\t%d\n", roleNames[role], role);
    }

    return 0;
}
