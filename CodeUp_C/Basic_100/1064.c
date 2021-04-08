#include <stdio.h>

int main(void)
{
	long long int a, b, c, save = 0;

	scanf("%lld %lld %lld", &a, &b, &c);

	save = a > b ? b : a;
	save = save > c ? c : save;

	printf("%lld\n", save);
	
	return 0;
}
