#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int strend(char *, char *);

int main()
{
	char str1[50];
	char str2[50];
	scanf("%s", &str1);
	scanf("%s", &str2);
	int str = strend(str1, str2);
	printf("%d\n", str);
	
}

int strend(char *s, char *t)
{
	size_t ls = strlen(s);
	size_t lt = strlen(t);
	if (ls >= lt)
	{
		return (0 == memcmp(t, s + (ls - lt), lt));
	}
	return 0;
}