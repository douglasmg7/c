#include <stdio.h>
/*
    Variable acts as a label to a memory location where the data is stored.

    Variable is declered 
        When when the compiler is informed that a variable exists along with its type.
        The compiler does not generate instructions to allocate the storage for the variable at that point.

    Variable is defined
        When the compiler generates instruction to allocate the storage to the variable. 
        Is also a declaration, but not all variable declarations are variable definitions.
*/

// Variable declaration., not defined yet.
// 'extern' keyword tells the compiler that this variable is defined outside the scope of this file.
extern int will_be_defined_in_some_where;

int main(void) {
    // Variable definition 
    // Some times called a variable declaration, is nothing more than letting the compiler know you will need some memory
    // space for your program data so it can reserve some.
    // There is a diference between variable definition and variable declaration.
    int i;

    // Variable initialization.
    i = 0;

    // Variable definition and initialization.
    int j = 0;
}