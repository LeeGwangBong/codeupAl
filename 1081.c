#include <stdio.h>

int main(void) {
	
	int a ;
	int b;
	int i;
	int j;
		
		scanf("%d %d", &a,&b);
		
		for (i = 1; i <= a; i++) {
			for (j = 1; j <= b; j++) {
				printf("%d %d\n", i, j);
			}
		}


	
	return 0;

}
