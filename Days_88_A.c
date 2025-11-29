//Print all enum names and integer values using a loop.
#include <stdio.h>
typedef enum {
    ADMIN = 1,
    USER,
    GUEST
} Role;
int main() {
    const char *names[] = {
        "INVALID",  
        "ADMIN",
        "USER",
        "GUEST"
    };
    for (int r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", names[r], r);
    }

    return 0;
}