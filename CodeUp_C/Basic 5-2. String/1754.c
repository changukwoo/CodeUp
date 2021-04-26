#include <stdio.h>

int main(void)
{
	char arr1[200], arr2[200];

	scanf("%s", arr1);
	scanf("%s", arr2);

	if (strlen(arr1) > strlen(arr2))
		printf("%s %s\n", arr2, arr1);
	else if (strlen(arr1) < strlen(arr2))
		printf("%s %s\n", arr1, arr2);
	else
	{
		if (strcmp(arr1, arr2) == 1)
			printf("%s %s\n", arr2, arr1);
		else
			printf("%s %s\n", arr1, arr2);
	}

	return 0;
}