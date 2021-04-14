#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	if (a % 7 == 0)
		printf("multiple\n");
	else
		printf("not multiple\n");

	return 0;
}