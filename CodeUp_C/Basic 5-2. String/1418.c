#include <stdio.h>

int main(void)
{
	char arr[11];

	gets(arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == 't')
			printf("%d ", i + 1);
	}

	printf("\n");

	return 0;
}