#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
	{
		if (b % 2 == 0)
			printf("Â¦¼ö+Â¦¼ö=Â¦¼ö\n");
		else
			printf("Â¦¼ö+È¦¼ö=È¦¼ö\n");
	}
	else
	{
		if (b % 2 == 0)
			printf("È¦¼ö+Â¦¼ö=È¦¼ö\n");
		else
			printf("È¦¼ö+È¦¼ö=Â¦¼ö\n");
	}

	return 0;
}