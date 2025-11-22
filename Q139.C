//Show that enums store integers by printing assigned values.

#include <stdio.h>
enum Status {
    SUCCESS = 100,
    FAILURE = 200,
    TIMEOUT = 300
};

int main() {
    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = TIMEOUT;

    printf("SUCCESS = %d\n", s1);
    printf("FAILURE = %d\n", s2);
    printf("TIMEOUT = %d\n", s3);

    return 0;
}
