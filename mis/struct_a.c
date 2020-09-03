#include <stdio.h>

typedef int int_t;

// This defines a type called "struct Car" which then can be used to declare a struct variable.
struct Person {
    char* name;
    int age;
};


int main() {
    int_t i = 3;
    printf("value of i: %d\n", i);

    struct Person *pP1, p1;
    pP1 = &p1;
    pP1->name = "Linda";
    pP1->age = 23;
    printf("Person: %s\n", p1.name);
    printf("Person: %s\n", pP1->name);
    printf("Person: %s\n", (*pP1).name);
}