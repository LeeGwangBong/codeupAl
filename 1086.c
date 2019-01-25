#include <stdio.h>

int main(void) {
	
	int w;
	int h;
	int b;


	

	double sum = 0;
		
		scanf("%d %d %d",&w,&h,&b);
		
		sum = w * h * b;
		sum = sum / 8;
		sum = sum / 1024;
		sum = sum / 1024;
		printf("%.2f MB",sum);
	return 0;

}
