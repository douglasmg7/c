#include <stdio.h>
/*
    Data type is used to declare the type of a variable.
    Data type determine the type and size of data associated with a variable.
*/
int main(void) {
    // Integers.
    printf(":: Values in byte\n");
    // This is a integer data tupe used to store a single character(ASCII code) value or 1 byte of signed or unsigned integer value.
    // There is no other special meaning for the char type, and it is just another integer data type.
    printf("char: %lu\n", sizeof(char));    // Always 1 byte.
    printf("short: %lu\n", sizeof(short));  // Always 2 bytes.
    printf("int: %lu\n", sizeof(int));      // Depends on compile implementation, can be 2 or 4 bytes.
    printf("long: %lu\n", sizeof(long));    // Depends on compile implementation, can be 4 or 8 bytes.
    printf("long long: %lu\n", sizeof(long long));

    // Variable definition (data type + variable name).
    int var1;
    // Variable initialization.
    var1 = 0;

    signed int a = 3;
    printf("a: %d\n", a);
    printf("a: %u\n", a);
}