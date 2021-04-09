#include <stdio.h>

int main(void)
{
	int arr[11][11];
	int a = 2, b = 2;
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
			scanf("%d", &arr[i][j]);
	}

	for (int i = 1; i <= 20; i++)
	{
		if (arr[2][2] == 2)
		{
			arr[2][2] = 9;
			break;
		}
		else
			arr[a][b] = 9;

		if (arr[a][b + 1] == 1 && arr[a + 1][b] == 1)
			break;
		else if (arr[a][b + 1] == 2) // 오른쪽에 2가 있으면
		{
			arr[a][b + 1] = 9;
			break;
		}
		else if (arr[a][b + 1] == 0) // 오른쪽에 0이 있으면
		{
			if (arr[a][b + 1] == 2)
			{
				arr[a][b + 1] = 9;
				break;
			}

			arr[a][++b] = 9; // 오른쪽으로
		}
		else if (arr[a][b + 1] == 1) // 오른쪽에 1이 있으면
		{
			if (arr[a + 1][b] == 2)
			{
				arr[a + 1][b] = 9;
				break;
			}

			arr[++a][b] = 9; // 아래로
		}
	}

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}
