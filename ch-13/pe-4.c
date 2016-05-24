#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100

int main (int argc, char * argv[]) {
  FILE * pf;
  char line[MAX_LEN];

  if (argc < 2) {
    printf("Usage: %s file_name_1 file_name_2 ...\n", argv[0]);
    exit(1);
  }

  int i;
  for (i = 1; i < argc; i++) {
    if ((pf = fopen(argv[i], "r")) != NULL) {
      printf("File: %s\n", argv[i]);
      while (fgets(line, MAX_LEN, pf)) {
        fputs(line, stdout);
      }
      fclose(pf);
    }
    else {
      printf("Can't open file %s\n", argv[i]);
    }
  }
}
