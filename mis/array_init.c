// print the days for each month
#include <stdio.h>
#define MONTHS 12

int main(void){
	const int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int index;
	int maxIndex = sizeof days / sizeof days[0];

	for(index=0; index < maxIndex; index++)
		printf("Month %2d has %2d days.\n", index+1, days[index]);
	
	printf("Número de bytes um ítem %d\n", sizeof days[0]);
	printf("Número de bytes do array %d\n", sizeof days);
	return 0;
}