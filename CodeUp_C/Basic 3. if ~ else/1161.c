#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
	{
		if (b % 2 == 0)
			printf("¦��+¦��=¦��\n");
		else
			printf("¦��+Ȧ��=Ȧ��\n");
	}
	else
	{
		if (b % 2 == 0)
			printf("Ȧ��+¦��=Ȧ��\n");
		else
			printf("Ȧ��+Ȧ��=¦��\n");
	}

	return 0;
}