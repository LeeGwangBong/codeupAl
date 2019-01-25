#include <stdio.h>

int main(void) {
	
	int a = 0;
	
	
	scanf("%d",&a);
	
	if (a >= 0 && a <= 39) {
		printf("D");
	}
	else if (a >= 40 && a <= 69) {
		printf("C");
	}
	else if (a >= 70 && a <= 89) {
		printf("B");
	}
	else if (a >= 90 && a <= 100) {
		printf("A");
	}

	return 0;

}

