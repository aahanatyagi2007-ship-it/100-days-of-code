#Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {

    enum Status status = FAILURE; // change this to test other values

    switch(status) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
