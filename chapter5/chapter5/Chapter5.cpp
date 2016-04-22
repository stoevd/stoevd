#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// 5-4

//int strend(char *, char *);
//
//int main()
//{
//	char str1[50];
//	char str2[50];
//	scanf("%s", &str1);
//	scanf("%s", &str2);
//	int str = strend(str1, str2);
//	printf("%d\n", str);
//	
//}
//
//int strend(char *s, char *t)
//{
//	size_t ls = strlen(s);
//	size_t lt = strlen(t);
//	if (ls >= lt)
//	{
//		return (0 == memcmp(t, s + (ls - lt), lt));
//	}
//	return 0;
//}


// 5-5

//void myStrncpy(char[], char[], int);
//
//int main()
//{
//	char str1[30] = "213456213213";
//	char str2[30];
//	int n = 5;
//	myStrncpy(str2, str1, n);
//	str2[n] = '\0';
//	puts(str1);
//	puts(str2);
//	return 0;
//}
//
//void myStrncpy(char s[], char t[], int n)
//{
//	int i = 0;
//
//	while (s[i] = t[i], n-- && t[i++] != '\0')
//	{
//		t[n];
//	}
//}

///////////////////////////////////////////////

//void myStrncat(char[], char[], int);
//
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	myStrncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}
//
//void myStrncat(char s[], char t[], int n)
//{
//	int i;
//	int	j;
//
//	i = 0;
//
//	while (s[i] != '\0') 
//	{
//		i++;
//	}
//
//	j = 0;
//
//	while (t[j] != '\0' && j < n)
//	{
//		s[i] = t[j];
//		i++;
//		j++;
//	}
//
//	s[i] = '\0';
//}

//////////////////////////////////////////////

//int strncmp(const char * str1, const char * str2, size_t num);

