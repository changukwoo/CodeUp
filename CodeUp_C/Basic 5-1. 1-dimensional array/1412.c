#include <stdio.h>

int main(void)
{
	char arr[100];
	int arr2[100] = { 0, };

	fgets(arr, 100, stdin);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr2[arr[i] - 97] += 1;
	}

	for (int i = 0; i < 26; i++)
		printf("%c:%d\n", i + 97, arr2[i]);

	return 0;
}