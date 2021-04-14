#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	if (a == 1 || a == 3 || a == 5 || a == 7)
		printf("oh my god\n");
	else
		printf("enjoy\n");

	return 0;
}