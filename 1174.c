#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
	
	int h = 0;
	int m = 0;
	int time = 0;

	scanf("%d %d",&h,&m);
	
	time = h * 60 + m;
	time -= 30;
	time = 24 * 60 + time;
	time = time % (24 * 60);
	h = time / 60;
	m = time % 60;
	
	
	
	printf("%d %d", h, m);

	return 0;

}
