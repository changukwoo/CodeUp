#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if ((a - b + c) % 10 == 0)
		printf("대박\n");
	else
		printf("그럭저럭\n");

	return 0;
}