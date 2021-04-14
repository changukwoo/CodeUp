#include <stdio.h>

int main(void)
{
	int t, s, save = 0;

	scanf("%d %d", &t, &s);

	save = t;

	while (save < 90)
	{
		s++;
		save += 5;

		if (save >= 90)
			break;
	}

	printf("%d\n", s);

	return 0;
}