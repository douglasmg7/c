#include <stdio.h>

int main(){
    // Unsigned.
    printf("** Unsigned char **\n");
    /* unsigned char ic = 0b11111111; */
    unsigned char ic = 0x00;
    printf("Min value: %x\n", ic);
    printf("Min value: %d\n", ic);
    ic = 0xff;
    printf("Max value: %c\n", ic);
    printf("Max value: %d\n", ic);
    printf("Max value: %x\n", ic);
    printf("Max value: %X\n", ic);
    printf("Max value in octal: %o\n", ic);

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

    printf("Max negative value in octal: %o\n", c);

    // Signed - more significant bit is the sign, the more left digit.
    char c2 = 0b01010101;
    printf("c2: %d\n", c2);
    // Add one.
    c2 = 0b01010110;
    printf("c2+1: %d\n", c2);
    // Change sign - toggle all bits.
    c2 = 0b10101001;
    printf("-c2: %d\n", c2);
}