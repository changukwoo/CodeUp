#include <stdio.h>

int main(void)
{
	char arr[101];
	int count1 = 0, count2 = 0;

	fgets(arr, 101, stdin);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == 'c' || arr[i] == 'C')
			count1++;

		if ((arr[i] == 'c' && arr[i + 1] == 'c') || (arr[i] == 'C' && arr[i + 1] == 'c') || (arr[i] == 'c' && arr[i + 1] == 'C') || (arr[i] == 'C' && arr[i + 1] == 'C'))
			count2++;
	}

	printf("%d\n%d\n", count1, count2);

	return 0;
}