#Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {

    enum Menu choice = ADD; // You can change this value to test
    int a = 10, b = 20;      // Example numbers
    int result;

    switch(choice) {
        case ADD:
            result = a + b;
            printf("%d", result);
            break;

        case SUBTRACT:
            result = a - b;
            printf("%d", result);
            break;

        case MULTIPLY:
            result = a * b;
            printf("%d", result);
            break;
    }

    return 0;
}
