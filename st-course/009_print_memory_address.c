#include <stdio.h>

int main(void) {
    int t = 3;
    int t1 = 3;
    int t2 = 3;
    printf("Memory address of t: %p\n", &t);
    printf("Memory address of t: %p\n", &t1);
    printf("Memory address of t: %p\n", &t2);
    printf("Memory address size: %lu\n", sizeof(&t));
}