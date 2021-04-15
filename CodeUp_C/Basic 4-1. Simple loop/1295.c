#include <stdio.h>

int main(void)
{
	char arr[1001];

	scanf("%s", arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] = arr[i] - 32;
		else if (arr[i] >= 'A' && arr[i] <= 'Z')
			arr[i] = arr[i] + 32;
	}

	printf("%s\n", arr);

	return 0;
}