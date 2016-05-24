#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024
#define SLEN 81

void append(FILE *src, FILE *dest);

int main (void) {
  FILE *fa, *fs; // file for append and source
  int files = 0; // number of files appended
  char file_app[SLEN]; // name of append file
  char file_src[SLEN]; // name of source file

  puts("Enter name of destination file:");
  gets(file_app);
  
  // create source file
  if ((fa = fopen(file_app, "w")) == NULL) {
    fprintf(stderr, "Can't open %s\n", file_app);
    exit(2);
  }
  // create output buffer
  if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
    fputs("Can't create output buffer\n", stderr);
    exit(3);
  }

  // get first file name
  puts("Enter name of first source file (empty line to quit):");
  // open source file
  while (gets(file_src) && file_src[0] != '\0') {
    if (!strcmp(file_app, file_src)) {
      fputs("Can't append file to itself\n", stderr);
    }
    else if ((fs = fopen(file_src, "r")) == NULL) {
      fprintf(stderr, "Can't open %s\n", file_src);
    }
    else {
      if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
        fputs("can't create input buffer\n", stderr);
        continue;
      }

      append(fs, fa);
      // verify if was EOF
      if (ferror(fs))
        fprintf(stderr, "Error in reading file %s\n", file_src);
      if (ferror(fa))
        fprintf(stderr, "Error in writing file %s\n", file_app);

      fclose(fs);
      files++;

      printf("File %s appended\n", file_src);
      puts("Next file (empty line to quit):");
    }
  }
  printf("Done, %d files appended\n", files);
  fclose(fa);

  return 0;
}

void append(FILE *src, FILE *dst) {
  size_t bytes;
  static char temp[BUFSIZE];

  while ((bytes = fread(temp, sizeof(char), BUFSIZE, src)) > 0) {
    fwrite(temp, sizeof(char), BUFSIZE, dst);
  }
}
