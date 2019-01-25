#include <stdio.h>
#include <string.h>
int main(void) {
	
	int h = 0;
	int m = 0;
	int s = 0;

	scanf("%04d.%02d.%02d", &h, &m, &s);
	printf("%02d-%02d-%04d",s, m,h);
	return 0;
}

