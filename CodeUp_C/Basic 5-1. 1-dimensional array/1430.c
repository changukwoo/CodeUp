#include <stdio.h>

int N, M;
int arr[10000000];
int num;

int main(void)
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &num);

		arr[num] = 1;
	}

	scanf("%d", &M);
	for (int i = 1; i <= M; i++)
	{
		scanf("%d", &num);

		printf("%d ", arr[num]);
	}

	printf("\n");

	return 0;
}