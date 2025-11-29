//Show that enums store integers by printing assigned values.
#include <stdio.h>
typedef enum {
    RED = 5,
    BLUE = 10,
    GREEN = 20
} Color;
int main() {
    printf("RED = %d\n", RED);
    printf("BLUE = %d\n", BLUE);
    printf("GREEN = %d\n", GREEN);
    return 0;
}