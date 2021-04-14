#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	if ((a >= 50 && a <= 70) || a % 6 == 0)
		printf("win\n");
	else
		printf("lose\n");

	return 0;
}