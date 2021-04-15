#include <stdio.h>

int main(void)
{
	int a, b, sum = 0;
	char q;

	scanf("%d", &a);

	sum = a;

	while (1)
	{
		scanf("%c", &q);

		if (q == '=')
			break;

		scanf("%d", &b);

		switch (q)
		{
		case '+':
			sum = sum + b;
			break;
		case '-':
			sum = sum - b;
			break;
		case '/':
			sum = sum / b;
			break;
		case '*':
			sum = sum * b;
			break;
		}
	}

	printf("%d\n", sum);

	return 0;
}