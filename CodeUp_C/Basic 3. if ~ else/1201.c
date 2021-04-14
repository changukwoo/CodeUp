#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n > 0)
		printf("양수\n");
	else if (n == 0)
		printf("0\n");
	else
		printf("음수\n");

	return 0;
}