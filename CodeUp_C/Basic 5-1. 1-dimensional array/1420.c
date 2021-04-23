#include <stdio.h>

int main(void)
{
	int n;
	char name[51][51];
	int score[51];
	int rank[51];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%s", name[i]);
		scanf("%d", &score[i]);

		rank[i] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (score[i] < score[j])
				rank[i]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (rank[i] == 3)
			printf("%s\n", name[i]);
	}

	return 0;
}