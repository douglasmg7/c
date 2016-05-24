#include <stdio.h>
#include <stdlib.h> // for exit()
#include <string.h> // for strcpy(), strcat()
#define LEN 40

int main (int argc, char *argv[]) {
  FILE *in, *out; // define two FILE pointers
  int ch;
  char name[LEN]; // storage for output filename
  int count;

  // check for command-line arguments
  if (argc < 2) {
      fprintf(stderr, "Usage: %s filename\n", argv[0]);
      exit(1);
  }

  // setup input
  if ((in = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
    exit(2);
  }

  // setup output
  strncpy(name, argv[1], LEN-5); // copy file name
  name[LEN - 5] = '\0';
  strcat(name, ".red");
  if ((out = fopen(name, "w")) == NULL) {
    fprintf(stderr, "Can't create file \"%s\" for writing\n", name);
    exit(3);
  }

  // write reducted to file
  while ((ch = getc(in)) != EOF)
    if (count++ % 3 == 0)
      putc(ch, out); // print every 3rd char
  
  // clean up
  if (fclose(in) != 0 || fclose(out) != 0)
    fprintf(stderr, "Error in closing files\n");

  return 0;
}
