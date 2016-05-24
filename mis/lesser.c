#include <stdio.h>

int imin(int*, int*);

int main(void){
	int num1 = 100000;
	int num2 = 100000;

	printf("Digite dois números (q to quit):\n");
	while(scanf("%d %d", &num1, &num2)==2){
		printf("O menor dos números %d e %d é %d\n", num1, num2, imin(&num1, &num2));
		printf("Digite dois números (q to quit):\n");
	}
	printf("Bye!\n");
	return 0;
}

int imin(int* num1, int* num2){
	return *num1 < *num2 ? *num1 : *num2;
}
