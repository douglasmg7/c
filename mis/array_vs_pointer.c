#include <stdio.h>

int main(void) {
    int myNumbers[4] = {25, 50, 75, 100};

    // Get the memory address of the myNumbers array
    printf("Array memory        : %p\n", myNumbers);

    // Get the memory address of the first array element
    printf("First element memory: %p\n", &myNumbers[0]);

    // Get the memory address of the second element
    printf("a: %p\n", (myNumbers + 1));
    int* ptr = myNumbers;
    // Point to the second element
    ptr++;
    printf("b: %p\n", ptr);
    // Address of second element
    printf("c: %p\n", &myNumbers[1]);
}