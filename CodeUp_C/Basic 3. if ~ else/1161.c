#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
	{
		if (b % 2 == 0)
			printf("礎熱+礎熱=礎熱\n");
		else
			printf("礎熱+�汝�=�汝酅n");
	}
	else
	{
		if (b % 2 == 0)
			printf("�汝�+礎熱=�汝酅n");
		else
			printf("�汝�+�汝�=礎熱\n");
	}

	return 0;
}