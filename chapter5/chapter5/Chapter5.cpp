#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAXWORD 100

// 5-4
//
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
//		return (memcmp(t, s + (ls - lt), lt) == 0);
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
//	int i = -1;
//
//	while (n-- && t[i++] != '\0')
//	{
//		s[i] = t[i];
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
//	int day;
//
//	day = day_of_year(2016, 2, 29);
//	printf("%d\n", day);
//	month_day(2016, 60);
//	return 0;
//}
//
//int day_of_year(int year, int month, int day)
//{
//	if (year < 0 || month <= 0 || month > 12 || day <= 0)
//	{
//		return -1;
//	}
//	int i;
//	int leap;
//
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	if (day > daytab[leap][month])
//	{
//		return -1;
//	}
//	for (i = 1; i < month; i++)
//	{
//		day += daytab[leap][i];
//	}
//	return day;
//}
//
//void month_day(int year, int yearday)
//{
//
//	if(year < 0) 
//	{
//		printf("Error! Invalid year!\n");
//	}
//	else
//	{
//		int i;
//		int leap;
//
//		leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//
//		for (i = 1; yearday > daytab[leap][i]; i++)
//		{
//			yearday -= daytab[leap][i];
//		}
//		printf("Month: %d, Day: %d\n", i, yearday);
//	}
//}


// 5-9 

//static char daytab[2][13] = {
//	{ 0,31,28,31,30,31,30,31,31,30,31,30,31 },
//	{ 0,31,29,31,30,31,30,31,31,30,31,30,31 }
//};
//
//int day_of_year(int year, int month, int day);
//void month_day(int year, int yearday, int *pmonth, int *pday);
//
//int main(void)
//{
//	int day;
//	int mo;
//	int dat;
//
//	day = day_of_year(2016, 2, 29);
//	printf("%d\n", day);
//	month_day(2016, 65, &mo, &dat);
//	return 0;
//}
//
//int day_of_year(int year, int month, int day)
//{
//	if (year < 0 || month <= 0 || month > 12 || day <= 0)
//	{
//		return -1;
//	}
//	int i;
//	int leap;
//
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	if (day > daytab[leap][month])
//	{
//		return -1;
//	}
//	for (i = 1; i < month; i++)
//	{
//		day += daytab[leap][i];
//	}
//	return day;
//}
//
//void month_day(int year, int yearday, int *pmonth, int *pday)
//{
//	int i;
//	int leap;
//
//	if (year < 1)
//	{
//		*pmonth = -1;
//		*pday = -1;
//		return;
//	}
//	else
//	{
//		leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//
//		for (i = 1; yearday > daytab[leap][i]; i++)
//		{
//			yearday -= daytab[leap][i];
//		}
//		printf("Month: %d, Day: %d\n", i, yearday);
//	}
//	if (i > 12 && yearday > daytab[leap][12])
//	{
//		*pmonth = -1;
//		*pday = -1;
//	}
//	else
//	{
//		*pmonth = i;
//		*pday = yearday;
//	}
//}
