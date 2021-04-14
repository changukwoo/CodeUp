#include <stdio.h>

int main(void)
{
	int time, one, two;

	scanf("%d %d %d", &time, &one, &two);

	while (time < 90)
	{
		one++;
		time += 5;
	}

	if (one == two)
		printf("same\n");
	else if (one > two)
		printf("win\n");
	else
		printf("lose\n");

	return 0;
}