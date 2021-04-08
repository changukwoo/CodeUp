#include <stdio.h>

int main(void)
{
	long long int a;

	scanf("%lld", &a);

	switch (a / 10)
	{
	case 0:
		printf("D\n");
		break;
	case 1:
		printf("D\n");
		break;
	case 2:
		printf("D\n");
		break;
	case 3:
		printf("D\n");
		break;
	case 4:
		printf("C\n");
		break;
	case 5:
		printf("C\n");
		break;
	case 6:
		printf("C\n");
		break;
	case 7:
		printf("B\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 9:
		printf("A\n");
		break;
	case 10:
		printf("A\n");
		break;
	}

	return 0;
}