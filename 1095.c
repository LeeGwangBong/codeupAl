#include <stdio.h>


int main(void) {
	
	int a = 0;
	int t = 0;
	int min = 0;
	int b[24] = {NULL};
	int i;
	int tmp;

	scanf("%d\n", &a);
	for (i =  0;i < a;i++) {
		scanf("%d ",&b[i]);
		
	}
	    min = b[0];
	for (i = 0;i < a;i++) {
		if (min > b[i]) {
			min = b[i];
		}
	}
	printf("%d", min);
	

}
