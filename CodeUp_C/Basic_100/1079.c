#include <stdio.h>

int main(void)
{
	char c;

	while (1)
	{
		scanf(" %c", &c);
		
		printf("%c\n", c);

		if (c == 'q')
			return 0;
	}
}
