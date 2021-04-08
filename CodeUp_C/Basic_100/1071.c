#include <stdio.h>

int main(void)
{
	long long int a;

	while (1)
	{
		scanf("%lld", &a);

		if (a == 0)
			return 0;
		
		printf("%lld\n", a);
	}
}
