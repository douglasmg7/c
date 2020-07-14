#include <stdio.h>
/*
*/

void file_2_func();

int mainPublicData;

/*
    Make the variable private to this file,
    so it can't be used into another file using extern.
*/
static int mainPrivateData;

int main(void) {
    printf("mainPublicData: %d\n", mainPublicData);
    file_2_func();
    printf("mainPublicData: %d\n", mainPublicData);
    return 0;
}
