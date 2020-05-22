#include <stdio.h>

int main(){
    // Unsigned.
    printf("** Unsigned char **\n");
    /* unsigned char ic = 0b11111111; */
    unsigned char ic = 0x00;
    printf("Min value: %x\n", ic);
    printf("Min value: %d\n", ic);
    ic = 0xff;
    printf("Max value: %x\n", ic);
    printf("Max value: %d\n", ic);

    // Signed - more significant bit is the sign.
    printf("** Signed char **\n");
    char c = 0b00000010;
    printf("Char value: %d\n", c);
    // Change sign.
    // 0b11111101 - toggle all bits.
    // 0b11111110 - add one.
    c = 0b11111110;
    printf("Char value: %d\n", c);

    c = 0b01111111;
    printf("Max positive value: %d\n", c);

    c = 0b10000000;
    printf("Max negative value: %d\n", c);
}