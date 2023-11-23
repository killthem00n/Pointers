#include <stdio.h>

int main(void){
	unsigned int number;
	printf("Your number?\n");
	scanf("%d", &number);
	unsigned char *ptr;
	ptr = (char *)&number;
	ptr = ptr + 2;
	printf("Third byte is %d\n", *ptr);
}
