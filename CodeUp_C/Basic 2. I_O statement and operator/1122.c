#include <stdio.h>

int main(void)
{
	int s;
	int min = 0, sec = 0;

	scanf("%d", &s);

	min = s / 60;
	sec = s % 60;

	printf("%d %d\n", min, sec);

	return 0;
}