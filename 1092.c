#include <stdio.h>

int main(void) {
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	int day=1;
	
	scanf("%d %d %d", &a,&b,&c);

	while (day%a != 0 || day%b != 0 || day%c !=0) {
		day++;
	}
	printf("%d", day);
	
 
	return 0;

}
