#include <stdio.h>

int main(void)
{
	int arr[4], temp = 0, a, b, c;

	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	a = arr[0];
	b = arr[1];
	c = arr[2];

	if (a < b + c)
	{
		if (a == b && b == c)
			printf("Á¤»ï°¢Çü\n");
		else if ((a == b && c != b) || (a == c && b != c) || (b == c && a != c))
			printf("ÀÌµîº¯»ï°¢Çü\n");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
			printf("Á÷°¢»ï°¢Çü\n");
		else
			printf("»ï°¢Çü\n");
	}
	else
		printf("»ï°¢Çü¾Æ´Ô\n");

	return 0;
}