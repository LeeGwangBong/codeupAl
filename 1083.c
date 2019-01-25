#include <stdio.h>

int main(void) {
	
	int a ;
	
	int i;
	
		
		scanf("%d",&a);
		
		for (i = 1; i <=a; i++) {
			
				
				if (i % 3 == 0) {
					printf("X ");
				}
				else {
					printf("%d ", i);
				}
				
		}


	
	return 0;

}
