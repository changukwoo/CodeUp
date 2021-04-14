#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	if ((a >= 30 && a <= 40) || (a >= 60 && a <= 70))
		printf("win\n");
	else
		printf("lose\n");

	return 0;
}