#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n == 11 || n == 12 || n == 13)
		printf("%dth\n", n);
	else if (n % 10 == 1)
		printf("%dst\n", n);
	else if (n % 10 == 2)
		printf("%dnd\n", n);
	else if (n % 10 == 3)
		printf("%drd\n", n);
	else
		printf("%dth\n", n);

	return 0;
}