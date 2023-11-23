#include <stdio.h>

int main(void){
	int matrix[10];

	for (int i = 0; i < 10; i++){
		matrix[i] = i;
	}

	int *ptr = (int *)&matrix;

	for (int i = 0; i < 10; i++){
		printf("%d ", *ptr);
		ptr ++;
	}
	printf("\n");
}