#include <stdio.h>

int main(void) {
	
	int a;
	int i;
	int sum = 0;

	scanf("%d", &a);
	for (i = 1;i <= a;i++) {
		if (i % 3 == 0) {
			continue;
		}
		else {
			printf("%d ", i);
		}
	}
		
	return 0;

}
