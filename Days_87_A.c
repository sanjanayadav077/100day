//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
typedef enum {
    ADMIN = 1,
    USER,
    GUEST
} Role;
int main() {
    int choice;
    printf("Enter role (1=ADMIN, 2=USER, 3=GUEST): ");
    scanf("%d", &choice);
    switch ((Role)choice) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You can browse only.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }
    return 0;
}
