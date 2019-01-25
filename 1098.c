
#include <stdio.h>



int main(void) {
	
	int h, w = 0;
	int n;
	int l;
	int d;
	int x, y;
	int i, j;
	scanf("%d %d", &h, &w);
	int a[101][101];
	//초기화
	for (i = 1;i <= h;i++) {
		for (j = 1;j <= w;j++) {
			a[i][j] = 0;
		}
	}
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		//가로인경우
		if (d == 0) {
			for (j = 0;j <l;j++) {
				a[x][j+y] = 1;
			}
		}
		//세로인경우
		else if(d == 1){
			for (j = 0;j <l;j++) {
				a[x+j][y] = 1;
			}
		}	
	}
	//출력
	for (i = 1;i <= h;i++) {
		for (j = 1;j <= w;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
