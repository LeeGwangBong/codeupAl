#include <stdio.h>
#include <string.h>
int main(void) {
	
	int i = 0;
	scanf("%d", &i);
	printf("[%d]\n", i-(i%10000));
	printf("[%d]\n", ((i%10000)-(i%1000)));
	printf("[%d]\n", ((i% 1000)-(i%100)));
	printf("[%d]\n", ((i%100)-(i%10)));
	printf("[%d]\n", (((i % 10000) % 1000) % 100)%10);
	return 0;
}

