#include <stdio.h>

int main(void) {
	
	int a = 0;
	int b = 0;
	int sum = 1;
	int i = 0;

	scanf("%d %d", &a,&b);
	for (i = 0;i < b;i++) {
		sum = sum * 2;
		
	}
	printf("%d", a*sum);
	


	return 0;
}
