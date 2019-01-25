#include <stdio.h>

int main(void) {
	
	int a = 0;
	int d = 0;
	int n = 0;
	int i;
	int sum=0;

	scanf("%d %d %d", &a,&d,&n);
	sum = a;
	for (i = 1;i <n;i++) {

		sum += d;
		
	}
	printf("%d", sum);
	return 0;

}
