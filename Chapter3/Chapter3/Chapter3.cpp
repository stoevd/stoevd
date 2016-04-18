#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//3-3

//void expand(char[], char[]);
//
//int main()
//{
//	char str1[100];
//	fgets(str1, 100, stdin);
//	char str2[100];
//	expand(str1, str2);
//	printf("%s\n",str2);
//}
//
//void expand(char str1[], char str2[])
//{
//	/*int i = 0;
//	char letter;
//	while (str1[i] <= str1[i+2])
//	{
//		printf("%c", str2[i]);
//		i++;
//	}*/
//
//
//	//for (i = 0; i < strlen(str1); i++)
//	//{
//	//	if (str1[i] == '-' && str1[i - 1] < str1[i + 1])
//	//	{
//	//		for (letter = str1[i - 1]; letter < str1[i + 1]; letter++)
//	//		{
//	//			str2[letter];
//	//		}
//	//	}
//	//}
//
//	int i;
//	int j;
//	int letter;
//
//	i = 0;
//	j = 0;
//
//	while ((letter = str1[i++]) != '\0')
//		if (str1[i] == '-' && str1[i + 1] >= letter)
//		{
//			i++;
//			while (letter < str1[i])
//				str2[j++] = letter++;
//		}
//		else
//			str2[j++] = letter;
//
//	str2[j] = '\0';
//}

void itoa(int n, char s[], int width);
void reverse(char s[]);

int main()
{
	int n = -21332;
	char s[100];
	int width = 20;
	//fgets(s, 100, stdin);
	itoa(n, s, width);
	printf("%s\n", s);

//	/*int i;
//	char buffer[33];
//	printf("Enter a number: ");
//	scanf_s("%d", &i);
//	_itoa(i, buffer, 10);
//	printf("decimal: %s\n", buffer);
//	_itoa(i, buffer, 16);
//	printf("hexadecimal: %s\n", buffer);
//	_itoa(i, buffer, 2);
//	printf("binary: %s\n", buffer);
//	return 0;*/

}

//3-6

void itoa(int n, char s[], int width)
{
	int i;
	int sign;

	if ((sign = n) < 0) // record sign
	{
		n = -n; // make n positive
	}
	i = 0;
	do // generate digits in reverse order
	{
		s[i++] = n % 10 + '0'; // get next digit
	} while ((n /= 10) > 0); // delete it
	if (sign < 0)
	{
		s[i++] = '-';
	}
	while (i < width)
		s[i++] = '*';
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	int c;
	int i;
	int j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
