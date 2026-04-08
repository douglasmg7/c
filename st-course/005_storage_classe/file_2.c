#include "file_2.h"

extern int mainPublicData;

void file_2_func() {
    mainPublicData = 2;
    // Can not be used, decleraded as static in the main file.
    /* mainPrivateData = 2 */
}