#include <stdio.h>

int main(void){
	char pooh = 'a';
	int pof = 34;
	printf("%d - %p\n", pooh, &pooh);
	printf("%d - %p\n", pof, &pof);
	printf("sizeof byte = %d\n", sizeof pooh);
}