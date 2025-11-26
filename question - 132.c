#Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal = GREEN; // You can change this value to test

    if(signal == RED) {
        printf("Stop");
    }
    else if(signal == YELLOW) {
        printf("Wait");
    }
    else if(signal == GREEN) {
        printf("Go");
    }

    return 0;
}

