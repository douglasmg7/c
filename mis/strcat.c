#include <stdio.h>
#include <string.h>
#define SIZE 40

int main(void) {
  char s1[SIZE] = "PRIMEIRA-STRING";
  printf("S1-Length%d\n", (int)strlen(s1));
  char s2[] = "SEGUNDA-STRING";
  strcat(s1 ,s2);
  printf("S1-Length%d\n", (int)strlen(s1));
  puts(s1);
}
