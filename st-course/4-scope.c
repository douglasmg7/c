#include <stdio.h>
/*
    A variable scope refers to the accessibility of a variable in a give program or function.
*/

// Global variable.
// Visible for all functions.
// All uninitialized global variables will have 0 as default value.
int all_count0;

int main(void) {
    // Local variable.
    // Exists only in this function.
    // Default value is unpredictable (garbage value).
    int j;
}