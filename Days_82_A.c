//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;
int main() {
    TrafficLight light;
    printf("Enter traffic light value (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid value!\n");
    }
    return 0;
}