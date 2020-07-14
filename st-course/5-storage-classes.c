#include <stdio.h>
/*
    Storage classes decides:
        Scope of a variable
        Visibility of a variable or function
        Life time of a variable

    There are two widely used storage class specifier:
        static
        extern
*/

void countCalledTimes();

int main(void) {
    countCalledTimes();
    countCalledTimes();
    countCalledTimes();
}

void countCalledTimes() {
    // static change the lifetime to exist between functions call. 
    static int count = 0;
    count++;
    printf("Called %d times\n", count);
}