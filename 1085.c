#include <stdio.h>

int main(void) {
	
	int h;
	int b;
	int c;
	int s;

	int i;

	double sum = 0;
		
		scanf("%d %d %d %d",&h,&b,&c,&s);
		
		sum = h * b * c * s;
		sum = sum / 8;
		sum = sum / 1024;
		sum = sum / 1024;
		printf("%.1f MB",sum);
	return 0;

}
