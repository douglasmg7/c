#include <stdio.h>
#include <stdlib.h>

#define QTD_INT 1024*1024*200

int main() {
  int * pint;
  char c1;

  printf("%s\n", "allocate memory ? (y/n)" );
  while(scanf("%c", &c1) == 1) {
    if (c1 == 'n') {
      // printf("%s\n", "saiu");
      // printf("%c\n", c1);
      return 0;
    }
    else if (c1 != 'y') {
      continue;
    }
    pint = (int *) malloc(QTD_INT * sizeof(int));
    if (pint == NULL) {
      printf("%s\n", "Memomory allocation failed. Goodbye.");
      exit(EXIT_FAILURE);
    }
    printf("%s %li%s\n", "AlLocated", QTD_INT * (long)sizeof(int) / (1024 * 1024), "M");

    // cpu load
    for (int i = 0; i < QTD_INT; i++) {
      pint[i] = 2;
    }
    for (int i = 0; i < QTD_INT; i++) {
      pint[i] = 3;
    }

    free(pint);
    printf("%s\n", "allocate memory ? (y/n)" );
  }
  return 0;
}
