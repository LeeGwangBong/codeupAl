#include <stdio.h>

int main(void) {
	
	int r;
	int g;
	int b;

	int i;
	int j;
	int k;

	int sum = 0;
		
		scanf("%d %d %d",&r,&g,&b);
		
		for (i = 0; i < r; i++) {
			for (j = 0; j < g; j++) {
				for (k = 0; k < b; k++) {

					printf("%d %d %d\n", i, j, k);
					sum+=1;
				}

			}
		
		}
		printf("%d", sum);
	return 0;

}
