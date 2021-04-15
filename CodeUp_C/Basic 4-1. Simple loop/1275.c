#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n", (int)pow(a, b));

	return 0;
}