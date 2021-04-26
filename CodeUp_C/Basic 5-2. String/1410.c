#include <stdio.h>

int main(void)
{
	char arr[100001];
	int count1 = 0, count2 = 0;

	scanf("%s", arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == '(')
			count1++;
		else if (arr[i] == ')')
			count2++;
	}

	printf("%d %d\n", count1, count2);

	return 0;
}