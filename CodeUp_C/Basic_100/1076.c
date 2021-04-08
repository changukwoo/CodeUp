#include <stdio.h>

int main(void)
{
	char c, save;

	scanf("%c", &c);

	save = c - (c - 'a');
	
	if (c == 'a')
	{
		printf("a\n");

		return 0;
	}

	while (1)
	{
		printf("%c ", save++);

		if (save == c)
		{
			printf("%c\n", c);

			return 0;
		}
	}
}
