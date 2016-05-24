#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main(int argc, char const *argv[]) {
  FILE *in, *out;
  int ch;
  char name_src[LEN];
  char name_dst[LEN];
  int count = 0;

  // get source file name
  puts("Entry file name to reduce (enter to exit):");
  if ((scanf("%s", name_src) == 0) || (name_src[0] == '\0')) {
    exit(1);
  }
  // open source file
  if ((in = fopen(name_src, "r")) == NULL) {
    fprintf(stderr, "couldn't open file %s\n", name_src);
    exit(2);
  }
  // built destination file name
  strncpy(name_dst, name_src, LEN-5);
  name_dst[LEN-5] = '\0';
  strcat(name_dst, ".red");
  // open destination file
  if ((out = fopen(name_dst, "w")) == NULL) {
    fprintf(stderr, "couldn't open file %s\n", name_dst);
    exit(3);
  }
  // copy data
  while ((ch = getc(in)) != EOF) {
    if (count++ % 3 == 0)
      putc(ch, out);  // print every 3rd char
  }
  // clean up
  if (fclose(in) || fclose(out))
    fprintf(stderr, "%s\n", "Error in closing files");

  return 0;
}
