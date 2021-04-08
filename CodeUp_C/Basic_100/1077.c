#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	for (int i = a; i >= 0; i--)
		printf("%d\n", a - i);
	
	return 0;
}
