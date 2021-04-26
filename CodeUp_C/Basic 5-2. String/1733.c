#include <stdio.h>

int main(void)
{
	char arr[101];

	gets(arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == 'I' && arr[i + 1] == 'O' && arr[i + 2] == 'I' && arr[i + 3] == NULL)
		{
			printf("IOI is the International Olympiad in Informatics.\n");
			return 0;
		}
		else
		{
			printf("I don't care.\n");
			return 0;
		}
	}
}