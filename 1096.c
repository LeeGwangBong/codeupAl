#include <stdio.h>


int main(void) {
	
	int a[20][20] = { NULL };
	
	int n = 0;
	
	int z;
	int y;
	
	int i;
	int j;
	scanf("%d\n", &n);
	
	for (i = 0;i < n;i++) {
		scanf("%d %d\n", &z, &y);
		a[z][y] = 1;
	}
	for (i = 1;i <= 19;i++) {
		for (j = 1;j <= 19;j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

}
