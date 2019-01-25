#include <stdio.h>
#include <string.h>
int main(void) {
	
	char data[2001];
	
	
	
	

	fgets(data,sizeof(data), stdin);
	printf("%s",data);
	
	return 0;
}

