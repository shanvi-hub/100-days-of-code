Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

  #include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

int main() {
    TrafficLight light = GREEN;

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
    }

    return 0;

}


/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
