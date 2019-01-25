#include <stdio.h>

int main(void) {
	
	char a ; //a = 97, b = 98
	int i;

	scanf("%c", &a);
	for (i = 97;i < a + 1;i++ ) {
		printf("%c ", i);
	}
	

	
	return 0;

}

