#include <stdio.h>

int main(void)
{
	char s1[30], s2[30], s3[30];

	gets(s1);
	gets(s2);
	gets(s3);

	if (s1[strlen(s1) - 1] == s2[0] && s2[strlen(s2) - 1] == s3[0] && s3[strlen(s3) - 1] == s1[0])
		printf("good\n");
	else
		printf("bad\n");

	return 0;
}