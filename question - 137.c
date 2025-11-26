#Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {

    enum Role role = GUEST; // Change this value to test

    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}


