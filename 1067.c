int main(void) {
	
	int a = 0;
	
	
	scanf("%d",&a);
	if (a > 0 ) {
		printf("plus\n");
		if (a % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
	else {
		printf("minus\n");
		if (a % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
	

	return 0;

}

