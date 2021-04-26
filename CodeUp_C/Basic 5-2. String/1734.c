#include <stdio.h>

int main(void)
{
	char arr[101];

	gets(arr);

	printf("welcome! %s\n", arr);

	return 0;
}