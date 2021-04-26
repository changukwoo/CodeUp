#include <stdio.h>

int main(void)
{
	char arr[1000];
	int sum = 0;

	gets(arr);

	for (int i = 0; arr[i] != NULL; i++)
		sum += arr[i] - 48;

	if (sum % 3 == 0)
		printf("1\n");
	else
		printf("0\n");

	return 0;
}