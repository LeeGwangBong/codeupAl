#include <stdio.h>

int main(void) {
	
	int a = 0;
	int m = 0;
	int d = 0;
	int n = 0;
	int i;
	int sum = 0;

	scanf("%d %d %d %d", &a,&m,&d,&n);
	sum = a;
	for (i = 1;i <n;i++) {
		sum *= m;
		sum += d;
		
	}
	printf("%d", sum);
	return 0;

}
