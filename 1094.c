#include <stdio.h>


int main(void) {
	
	int a = 0;
	
	int b[24] = {NULL};
	int i;

	scanf("%d\n", &a);
	for (i = a;i >= 1;i--) {
		scanf("%d ",&b[i]);
		
	}
	for (i = 1; i <=a;i++) {
		printf("%d ",b[i]);
	}
	

}
