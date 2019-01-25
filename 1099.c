
#include <stdio.h>



int main(void) {
	
	int i, j;
	int a[11][11];
	int x=1, y=1;
	//맵 받기
	for (i = 0;i < 10;i++) {
		for (j = 0; j < 10;j++) {
			scanf("%d ", &a[i][j]);
		}

	}
	a[x][y] = 9;
	while (1) {
		if (a[x][y + 1] != 1) {  //앞에가 1이아니면 9를 박아라
			y++;
			if (a[x][y] == 2) {
				a[x][y] = 9;
				break;
			}
			a[x][y] = 9;
		}
		else if(a[x+1][y]!=1){                //앞에 1일경우 밑으로 
			x++;
			if (a[x][y] == 2) {
				a[x][y] = 9;
				break;
			}
			a[x][y] = 9;
		}
		else break;
	}
	
	for (i = 0;i < 10;i++) {
		for (j = 0; j < 10;j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}


}
