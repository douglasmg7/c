#include <stdio.h>
#define SIZE 10

int main(void){
	int a1[SIZE] = {1,2,3};
	int a2[SIZE];

	a2[SIZE] = a1[SIZE];

	int i;
	for (i = 0; i < SIZE; ++i)
	{
		printf("elemento %d = %d\n", i, a2[i]);
	}
}