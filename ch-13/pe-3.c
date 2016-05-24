#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILE_LENGTH 20

int main(int argc, char * argv[]) {
  char file_name_src[FILE_LENGTH];
  char file_name_dst[FILE_LENGTH];
  FILE *f_src, *f_dst;
  char ch;
  int err_number;

  // get source file name
  puts("Enter the source file name:");
  scanf("%s", file_name_src);
  // get destination file name
  puts("Enter the destination file name");
  scanf("%s", file_name_dst);
  // open source file
  if ((f_src = fopen(file_name_src, "r")) == NULL) {
      printf("Can't open source file %s\n", file_name_src);
      exit(1);
  }
  // open destination file
  if ((f_dst = fopen(file_name_dst, "w")) == NULL) {
    printf("Can't open destination file %s\n", file_name_dst);
    exit(2);
  }
  // copy file to upper case
  while ((ch = getc(f_src)) != EOF) {
    fputc(toupper(ch), f_dst);
  }
  // close files
  fclose(f_src);
  fclose(f_dst);
  // verify error closing files
  if (err_number = ferror(f_src)) {
    printf("Error closing source file %s, error: %d\n", file_name_src, err_number);
  }
  if (ferror(f_dst) != 0) {
    printf("Error closing destination file %s\n", file_name_dst);
  }
  // sucess message
  printf("file %s copied to file %s, converting to upper case\n", file_name_src, file_name_dst);
  return 0;
}
