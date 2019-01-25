#include <stdio.h>

int main(void) {
	
	int a = 0;
	int b = 0;
	int i;
	
	scanf("%d\n",&a);
	
	for (i = 1;i < a + 1;i++) {
		scanf("%d", &b);
		printf("%d\n", b);
	}

	
	return 0;

}
