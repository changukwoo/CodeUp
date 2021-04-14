#include <stdio.h>

int main(void)
{
	int x, o, cost;

	scanf("%d %d %d", &x, &o, &cost);

	if (x > o - cost)
		printf("do not advertise\n");
	else if (x < o - cost)
		printf("advertise\n");
	else
		printf("does not matter\n");

	return 0;
}