#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", a > b ? (b > c ? c : b) : (a > c ? c : a));

	return 0;
}