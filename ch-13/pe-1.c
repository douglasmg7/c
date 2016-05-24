#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int ch;		// each character as read
	FILE *fp;
	char file_name[20];		// file name to be open
	long count = 0;

	// get file name to be open
	puts("Enter the file name to be read: ");
	if (scanf("%s", file_name) < 1) {
		puts("Invalid file name!\n");
		exit(1);
	}
	// open file
	if ((fp = fopen(file_name, "r")) == NULL) {
		printf("Can't open %s\n", file_name);
		exit(2);
	}
	// read file
	while ((ch = getc(fp)) != EOF) {
		putc(ch, stdout);
		count++;
	}
	// close file
	fclose(fp);
	printf("File %s has %ld characters\n", argv[1], count);
	return 0;
}
