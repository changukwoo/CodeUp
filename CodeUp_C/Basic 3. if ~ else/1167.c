#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	{
		if (b > c)
			printf("%d\n", b);
		else
			printf("%d\n", c);
	}
	else if (b > a && b > c)
	{
		if (a > c)
			printf("%d\n", a);
		else
			printf("%d\n", c);
	}
	else if (c > a && c > b)
	{
		if (a > b)
			printf("%d\n", a);
		else
			printf("%d\n", b);
	}
	else if (a == b && b == c)
		printf("%d\n", b);
	else if (a == b && a > c || a == b && a < c)
		printf("%d\n", b);
	else if (a == c && b > c || a == c && b < c)
		printf("%d\n", a);
	else if (b == c && a > c || b == c && a < c)
		printf("%d\n", b);

	return 0;
}