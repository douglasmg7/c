#include <stdio.h>
#include "math.h"

int main() {
    printf("Add: %d\n", math_add(0x0FFF1111, 0x0FFF1111));
    printf("Sub: %d\n", math_sub(0x0FFF1111, 0x0FFF1111));
    printf("Mul: %lld\n", math_mul(0x0FFF1111, 0x0FFF1111));
    printf("Div: %.2f\n", math_div(0x0FFF1111, 0x0FFF1111));

    return 0;
}
