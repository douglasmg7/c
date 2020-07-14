#include <stdio.h>

int main(){

    int vector[] = {28, 41, 7};

    /* 
        When an array name is used by itself, 
        it returns the address of an array, 
        which is also the address of the first element of the array.
    */
    int* pi = vector;

    printf("size of int: %zu\n\n", sizeof(int));

    printf("%d\n", *pi);
    printf("%p\n\n", pi);

    pi += 1;
    printf("%d\n", *pi);
    printf("%p\n\n", pi);

    pi++;
    printf("%d\n", *pi);
    printf("%p\n\n", pi);

    return 0;
}