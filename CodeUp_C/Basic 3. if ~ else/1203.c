#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n <= 10)
		printf("정상\n");
	else if (n <= 20)
		printf("과체중\n");
	else
		printf("비만\n");

	return 0;
}