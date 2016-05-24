#include <stdio.h>

int main(int argc, char const *argv[])
{
	char cRef;	// char for search in the files or line command
	char cTemp;
	FILE *file;
	int count; // how many time char was find
	char *lineCommand;

	// wrong use of progarm
	if (argc == 1)
	{
		printf("use: %s file_1 file_2 ...\n", argv[0]);
	}
	// get char for search
	if (argc > 1)
	{
		cRef = argv[1][0];
	}
	// search in the file(s)
	if (argc > 2){
		// search in all files
		int i;
		for (i = 2; i < argc; ++i){
			count = 0;
			if ((file = fopen(argv[i], "r")) != NULL){
				while ((cTemp = getc(file)) != EOF){
					if (cTemp == cRef)
						count++;
				}
				printf("in file \'%s\' found \'%c\' %d times\n", argv[i], cRef, count);
			}
			else {
				printf("can't open file %s\n", argv[i]);
			}
			fclose(file);
		}
	}
	// search in line command
	else {
		count = 0;
		while (((cTemp = getc(stdin)) != EOF) && (cTemp != '\0')){
			if (cTemp == cRef)
				count++;
		}
		printf("\nfound %c %d times\n", cRef, count);
	}
	return 0;
}