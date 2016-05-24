#include <stdio.h>
#include <string.h>

int main(void) {
  char text[] = "Era uma vez\0sasdf";
  int length = strlen(text);
  printf("lenght = %d\n", length );
  putchar(*(text+1));
  puts("\n");
  return(0);

}
