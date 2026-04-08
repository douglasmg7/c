#include <stdio.h>
int main(){
    int num = 3;
    int *pi;
    pi = &num;
    printf("Address of num: %p, value of num: %d\n", &num, num);
    printf("Defered pi: %d\n", *pi);
    *pi = 40;
    printf("num: %d\n", num);

    /* pi=0; */
    /* pi=NULL; */
    if (pi) {
        printf("Address of pi: %p, value of p: %p, deferend p: %d\n", &pi, pi, *pi);
    } else {
        printf("pi=NULL\n");
    }
}