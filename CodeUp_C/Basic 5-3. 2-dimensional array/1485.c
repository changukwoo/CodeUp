#include <stdio.h>

int main(void)
{
	int n, m;
	int arr[101][101];

	scanf("%d %d", &n, &m);

	int count = n * m;
	int as = 1, ae = m;
	int bs = 1, be = n;
	int rstart = 1;
	int cstart = 2;
	int rend = m;
	int cend = n;
	int q = 1;
	int w = 2;

	while (1)
	{
		for (int i = rstart; i <= rend; i++)
			arr[as][i] = count--;

		if (count + 1 == 1)
			break;

		for (int i = cstart; i <= cend; i++)
			arr[i][ae] = count--;

		if (count + 1 == 1)
			break;

		for (int i = --rend; i >= q; i--)
			arr[be][i] = count--;

		if (count + 1 == 1)
			break;

		for (int i = --cend; i >= w; i--)
			arr[i][bs] = count--;

		if (count + 1 == 1)
			break;

		rstart++;
		as++;
		cstart++;
		ae--;

		be--;
		q++;
		bs++;
		w++;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}