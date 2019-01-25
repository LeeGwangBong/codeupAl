#include <stdio.h>
#include <string.h>
int main(void) {
	
	char data[10];
	int i;

	fgets(data, sizeof(data), stdin);

	for (i = 0; i < sizeof(data)&&data[i]!=NULL; i++) {
		printf("'%c'\n", data[i]);
	}
	
	return 0;
}

