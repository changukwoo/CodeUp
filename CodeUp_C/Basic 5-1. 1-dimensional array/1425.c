#include <stdio.h>

int main(void)
{
	int N, C; // 학생 수 N, 한줄에 앉을 자리수 C
	int arr[100];
	int count = 0;
	int temp;

	scanf("%d %d", &N, &C);

	for (int i = 1; i <= N; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		printf("%d ", arr[i]);
		count++;

		if (count == C)
		{
			printf("\n");
			count = 0;
		}
	}

	printf("\n");

	return 0;
}