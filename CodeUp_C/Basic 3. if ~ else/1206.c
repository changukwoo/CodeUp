#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a % b == 0)
		printf("%d*%d=%d\n", b, a / b, a);
	else if (b % a == 0)
		printf("%d*%d=%d\n", a, b / a, b);
	else
		printf("none\n");

	return 0;
}