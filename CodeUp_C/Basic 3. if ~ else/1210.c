#include <stdio.h>

int main(void)
{
	int a, b, sum = 0;

	scanf("%d %d", &a, &b);

	switch (a)
	{
	case 1:
		sum += 400;
		break;
	case 2:
		sum += 340;
		break;
	case 3:
		sum += 170;
		break;
	case 4:
		sum += 100;
		break;
	case 5:
		sum += 70;
		break;
	}

	switch (b)
	{
	case 1:
		sum += 400;
		break;
	case 2:
		sum += 340;
		break;
	case 3:
		sum += 170;
		break;
	case 4:
		sum += 100;
		break;
	case 5:
		sum += 70;
		break;
	}

	if (sum > 500)
		printf("angry\n");
	else
		printf("no angry\n");

	return 0;
}