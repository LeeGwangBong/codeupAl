#include <stdio.h>

int main(void) {
	
	int a = 0 ; 
	int i;
	int sum = 0;

	scanf("%d", &a);
	for (i = 1;i < a + 1;i++ ) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);

	
	return 0;

}
