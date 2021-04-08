#include <stdio.h>

int main(void)
{
	unsigned int a;

	for (int i = 0; i < 3; i++)
	{
		scanf("%u", &a);

		if (a % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	
	return 0;
}
