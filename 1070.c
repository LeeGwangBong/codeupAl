﻿#include <stdio.h>

int main(void) {
	
	int a = 0;
	
	
	scanf("%d",&a);
	
	if (a == 12 || a == 1 ||a == 2) {
		printf("winter");
	}
	else if (a == 9 || a == 10 || a == 11) {
		printf("fall");
	}
	else if (a == 6 || a == 7 || a == 8) {
		printf("summer");
	}
	else if (a == 3 || a == 4 || a == 5) {
		printf("spring");
	}
	
	return 0;

}

