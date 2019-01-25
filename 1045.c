#include <stdio.h>

int main()
{
	int a;
	int b;


	scanf("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f", (float)a / b);

	return 0;
}
