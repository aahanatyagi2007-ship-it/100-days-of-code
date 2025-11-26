#Define a struct with enum Gender and print person's gender.
#include<stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {

    struct Person p = {"Rahul", MALE}; // Example person

    printf("Gender: ");

    switch(p.gender) {
        case MALE:
            printf("Male");
            break;
        case FEMALE:
            printf("Female");
            break;
        case OTHER:
            printf("Other");
            break;
    }

    return 0;
}
