#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE * pf_a, * pf_b;
  char file_a[512], file_b[512];
  char * pf_file_a, * pf_file_b;

  if (argc < 3) {
    printf("%s files_a files_b\n", argv[0]);
    exit(1);
  }

  if ((pf_a = fopen(argv[1], "r")) == NULL) {
    printf("can't open file %s\n", argv[1]);
    exit(2);
  }

  if ((pf_b = fopen(argv[2], "r")) == NULL) {
    printf("can't open file %s\n", argv[2]);
    exit(3);
  }

  while (((pf_file_a = fgets(file_a, sizeof file_a, pf_a)) != NULL) |
        ((pf_file_b = fgets(file_b, sizeof file_b, pf_b)) != NULL)) {
    if (pf_file_a != NULL) {
      printf("%s", file_a);
    }
    if (pf_file_b != NULL) {
      printf("%s", file_b);
    }
  }

  fclose(pf_a);
  fclose(pf_b);

  return 0;
}
