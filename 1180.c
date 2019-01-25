#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
	
	int a[2];
	int b = 0;
	char c[10] = { "GOOD" };
	char d[12] = { "OH MY GOD" };
	int tmp = 0;
	int i;
	scanf("%d",&b);
	a[0] = b / 10;
	a[1] = b % 10;
	
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	
	b = (a[0] * 10 + a[1])*2;
	printf("%d\n", b%100);
	if (b%100 <=50)
		printf("%s", c);
	else 
		printf("%s", d);
	
	

	return 0;

}
