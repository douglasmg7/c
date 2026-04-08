#include <stddef.h>
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

    /*
       The ptrdiff_t is a portable way to express the difference between two pointers.
    */
    int* p2 = vector + 1;
    ptrdiff_t diff = p2 - vector;
    printf("Diff between pointers: %td\n", diff); 

    /*
       Comparing pointers.
    */
    printf("Is p2 a head of vector: %d\n", p2>vector); 
    return 0;
}