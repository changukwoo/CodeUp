#include <stdio.h>

int main(void)
{
	char arr[201];

	scanf("%[^\n]s", arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == 'x' || arr[i] == 'y' || arr[i] == 'z')
			arr[i] = arr[i] - 23;
		else if (arr[i] == ' ')
			arr[i] = ' ';
		else
			arr[i] = arr[i] + 3;
	}

	printf("%s\n", arr);

	return 0;
}