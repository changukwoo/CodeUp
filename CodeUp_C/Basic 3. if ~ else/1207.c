#include <stdio.h>

int main(void)
{
	int a, b, c, d, sum = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	sum = a + b + c + d;

	if (sum == 0)
		printf("¸ð\n");
	else if (sum == 1)
		printf("µµ\n");
	else if (sum == 2)
		printf("°³\n");
	else if (sum == 3)
		printf("°É\n");
	else if (sum == 4)
		printf("À·\n");

	return 0;
}