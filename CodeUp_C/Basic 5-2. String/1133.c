#include <stdio.h>

int main(void)
{
	char str[31];

	fgets(str, 31, stdin);

	printf("%s", str);

	return 0;
}