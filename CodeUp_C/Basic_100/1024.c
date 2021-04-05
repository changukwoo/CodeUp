#include <stdio.h>

int main(void)
{
	char arr[21];

	scanf("%s", arr);

	for (int i = 0; arr[i] != NULL; i++)
		printf("\'%c\'\n", arr[i]);

	return 0;
}