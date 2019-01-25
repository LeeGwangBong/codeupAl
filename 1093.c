#include <stdio.h>


int main(void) {
	
	int a = 0;
	int t = 0;
	int b[24] = {NULL};
	int i;

	scanf("%d\n", &a);
	for (i = 1;i <= a;i++) {
		scanf("%d ",&t);
		b[t] += 1;
	}
	for (i = 1; i <=23;i++) {
		printf("%d ",b[i]);
	}
	

}
