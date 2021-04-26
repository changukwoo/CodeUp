#include <stdio.h>

int main(void)
{
	char arr[101];
	int count = 0;

	gets(arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == 'l' && arr[i + 1] == 'o' && arr[i + 2] == 'v' && arr[i + 3] == 'e')
			count++;
	}

	printf("%d\n", count);

	return 0;
}