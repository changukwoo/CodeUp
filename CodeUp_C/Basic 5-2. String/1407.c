#include <stdio.h>

int main(void)
{
	char arr[101];

	fgets(arr, 101, stdin);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] != ' ')
			printf("%c", arr[i]);
	}

	return 0;
}