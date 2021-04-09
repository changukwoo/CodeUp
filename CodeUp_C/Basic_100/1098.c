#include <stdio.h>

int main(void)
{
	int w, h; // 가로, 세로
	int n; // 막대의 개수
	int l, d, x, y; // 길이, 방향(0 : 가로, 1 : 세로), 좌표 x,y
	int arr[101][101] = { 0, };
	
	scanf("%d %d", &w, &h);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);

		for (int z = 1; z <= l; z++)
		{
			if (d == 0)
			{
				arr[x][y] = 1;
				y++;
			}
			else
			{
				arr[x][y] = 1;
				x++;
			}
		}
	}

	for (int i = 1; i <= w; i++)
	{
		for (int j = 1; j <= h; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}
