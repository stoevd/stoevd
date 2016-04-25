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

//int strncmp(char *, char *, int);
//
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "helo000";
//	int a = strncmp(str1, str2, 2);
//	printf("%d\n", a);
//
//}
//int strncmp(char *str1, char *str2, int n)
//{
//	int i;
//
//	for (i = 0; str1[i] == str2[i]; i++)
//	{
//		if (str1[i] == '\0' || str2[i] == '\0' || --n <= 0)
//		{
//			return 0;
//		}
//	}
//	return str1[i] - str2[i];
//}
//////////pointers
//int strncmp(char *, char *, int);
//
//int main()
//{
//	char str1[] = "ahello";
//	char str2[] = "helo0000";
//	int a = strncmp(str1, str2, 3);
//	printf("%d\n", a);
//}
//
//int strncmp(char *str1, char *str2, int n)
//{
//	for (; *str1 == *str2; *str1++, *str2++)
//	{
//		if (*str1 == '\0' || --n <= 0)
//		{
//			return 0;
//		}
//	}
//	return *str1 - *str2;
//}

//////////////////////////////////////////////

// 5-8

//static char daytab[2][13] = {
//	{ 0,31,28,31,30,31,30,31,31,30,31,30,31 },
//	{ 0,31,29,31,30,31,30,31,31,30,31,30,31 }
//};
//
//int day_of_year(int year, int month, int day);
//void month_day(int year, int yearday);
//
//int main(void)
//{
//	int day, mo, dat;
//
//	day = day_of_year(1988, 2, 29);
//	printf("%d\n", day);
//	month_day(2000, 60);
//	return 0;
//}
//
//int day_of_year(int year, int month, int day)
//{
//	int i;
//	int leap;
//
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	if (year < 0)
//	{
//		printf("ERROR!!!!");
//	}
//	else
//	{
//		for (i = 1; i < month; i++)
//		{
//			day += daytab[leap][i];
//		}
//		return day;
//	}
//}
//
//
//void month_day(int year, int yearday)
//{
//	int i;
//	int leap;
//
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	if (year < 0)
//	{
//		printf("ERROR!!!!!");
//	}
//	else
//	{
//		for (i = 1; yearday > daytab[leap][i]; i++)
//		{
//			yearday -= daytab[leap][i];
//		}
//		printf("Month: %d, Day: %d\n", i, yearday);
//	}
//
//}


// 5-9 ??
