#include <stdio.h>

int main(void){
	int num1=0;
	int num2=0;
	int numTotal;

	printf("Digite dois números: ");
	numTotal = scanf("%d %d", &num1, &num2);
	printf("Números digitados\n%d\n%d\n", num1, num2);
	printf("Números de parâmetros recebidos: %d\n", numTotal);

	return 0;
}
