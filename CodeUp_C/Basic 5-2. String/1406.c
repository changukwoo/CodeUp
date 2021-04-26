#include <stdio.h>

int main(void)
{
	char arr[5];

	scanf("%s", arr);

	if (arr[0] == 'l' && arr[1] == 'o' && arr[2] == 'v' && arr[3] == 'e' && arr[4] == NULL)
		printf("I love you.\n");

	return 0;
}