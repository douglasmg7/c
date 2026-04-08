#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void printCharPointer(char* pc, size_t count);

// Can't use function to initialize global var.
// char* global_var = (char*)malloc(sizeof(char) * (strlen("oi") + 1));

int main() {
    /*
       malloc - allocate no clean memory.
    */
    /* printf("Size of oi: %zu\n", strlen("oi")); */
    char* pc = (char*)malloc(sizeof(char) * (strlen("oi") + 1));
    if (pc == NULL) return 1;
    printf("** malloc\n");
    printCharPointer(pc, 3);

    memset(pc, 'a', (strlen("oi") + 1));
    printf("** memset\n");
    printCharPointer(pc, 3);

    printf("** Data copied\n");
    strcpy(pc, "oi");
    printCharPointer(pc, 3);
    free(pc);
    pc = NULL;

    /*
       calloc - allocate and clear memory.
       void* calloc(size_t num_elements, size_t element_size)
    */
    pc = (char*)calloc((strlen("oi") + 1), sizeof(char));
    printf("** calloc\n");
    printCharPointer(pc, 3);
    // Not necessary, progaram finshed, but it is a good practice.
    free(pc);
    pc = NULL;

    return 0;
}

void printCharPointer(char* pc, size_t count) {
    for(int i=0; i<count; i++) {
        printf("Char at position %d: %c\n", i, *pc++);
    }
    printf("\n");
}