#include <stdio.h>

int main(void) {
	
	int a ;
	int i;
	int sum = 0;
		
		scanf("%d", &a);
		for (i = 1; i <=1000; i++) {
			sum += i;
			if (sum >=a) {
				break;
			}
		}
		printf("%d",i);
	

	
	return 0;
}
