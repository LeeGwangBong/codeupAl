#include <stdio.h>

int main(void) {
	
	int a = 0;
	
	again:
	scanf("%d",&a);
	if (a != 0) {
		
		printf("%d\n", a);
		goto again;
	}
	else {
		printf("%d\n", a);
	}
	
	
	
	return 0;

}
