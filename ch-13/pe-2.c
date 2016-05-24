#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

int main (int argc, char * argv[]) {

  FILE *f_src, *f_dst;     // source and destination file
  char buffer[BUFFER_SIZE];
  size_t bytes;   // number of bytes read
  int sucess = 1;   // sucessufull operation

  // wrong number of arguments
  if (argc < 3) {
    fprintf(stdout, "Usage: %s %s %s\n", argv[0], "source", "destination");
    exit(6);
  }
  // open source file
  if ((f_src = fopen(argv[1], "r+b")) == NULL) {
    fprintf(stderr, "Can't open source file %s\n", argv[1]);
    exit(1);
  }
  // open destination file
  if ((f_dst = fopen(argv[2], "w+b")) == NULL) {
    fprintf(stderr , "Can't open destination file %s\n", argv[2]);
    exit(2);
  }
  // copy the file
  while ((bytes = fread(buffer, sizeof(char), BUFFER_SIZE, f_src)) > 0) {
    fwrite(buffer, sizeof(char), bytes, f_dst);
  }
  // verify errors
  if (ferror(f_src) != 0) {
    fprintf(stderr, "Error reading file %s\n", argv[1]);
    sucess = 0;
  }
  if (ferror(f_dst) != 0) {
    fprintf(stderr, "Error writing file %s\n", argv[2]);
    sucess = 0;
  }
  // close source file
  if (fclose(f_src)) {
    fprintf(stderr, "Error closing file %s\n", argv[1]);
    exit(3);
  }
  // close destination file
  if (fclose(f_dst)) {
    fprintf(stderr, "Error closing file %s\n", argv[2]);
    exit(4);
  }
  // no sucess operation
  if (!sucess)
    exit(5);
  // sucess message
  fprintf(stdout, "File %s copied to file %s\n", argv[1], argv[2]);
  return 0;
}
