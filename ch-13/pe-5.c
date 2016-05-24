#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024
#define SLEN 81

void append(FILE *source, FILE *dest);

int main (int argc, char *argv[]) {
	FILE *fa, *fs;	// fa for append file, fs for source file
	int files = 0;	// number of files appended
	char *file_app;	// name of append file
	char *file_src;	// name of source file

	// check number of arguments
	if (argc < 3) {
		printf("usage: %s file_a file_b ...\n", argv[0]);
		exit(1);
	}
	// open source file
	file_app = argv[1];
	if ((fa = fopen(file_app, "a")) == NULL) {
		fprintf(stderr, "can't open file %s\n", file_app);
		exit(2);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
		fputs("can't create output buffer\n", stderr);
		exit(3);
	}
	// write files
	int i;
	for (i = 2; i < argc; i++) {
		file_src = argv[i];
		// file destination is source
		if (strcmp(file_app, file_src) == 0) {
			fputs("can't append file to itself\n", stderr);
		}
		else if ((fs = fopen(file_src, "r")) == NULL) {
			fprintf(stderr, "can't open file %d\n", file_src);
		}
		else {
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
				fputs("can't create input buffer\n", stderr);
				continue;
			}
			append(fs, fa);
			if (ferror(fs) != 0)
				fprintf(stderr, "error in reading file %s\n", file_src);
			if (ferror(fa) != 0)
				fprintf(stderr, "error in writing file %s\n", file_app);
			fclose(fs);
			files++;
			printf("File %s appended\n", file_src);
		}
	}
	fclose(fa);

	return 0;
}

void append(FILE *source, FILE *dest) {
	size_t bytes;
	static char temp[BUFSIZE];	// allocate once
	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) {
		fwrite(temp, sizeof(char), BUFSIZE, dest);
	}
}
			

		
