#include <stdio.h>

int main(void)
{
	char arr[21];

	gets(arr);

	for (int i = 0; arr[i] != NULL; i++)
		printf("%c", arr[i] + 2);

	printf("\n");

	for (int i = 0; arr[i] != NULL; i++)
		printf("%c", (arr[i] * 7) % 80 + 48);

	printf("\n");

	return 0;
}