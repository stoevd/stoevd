#include <stdio.h>
#include <string.h>


void itoa(int, char[]); // convert n to characters in s
void reverse(char[]); // reverse string s in place
void printd(int n); // print n in decimal
void itoaRecursion(int, char[]);

int main()
{
	/*int number;
	scanf_s("%d", &number);
	char str[20];
	itoa(number, str);
	printf("****%s\n", str);
	int decimalNumber;
	scanf_s("%d", &decimalNumber);
	printd(decimalNumber);
	printf("\n");*/
	int numberItoa;
	scanf_s("%d", &numberItoa);
	char strItoa[20];
	itoaRecursion(numberItoa, strItoa);
	printf("%s\n", strItoa);
}

void itoa(int n, char s[])
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

void itoaRecursion(int n, char s[])
{
	static int i;

	if (n / 10)
		itoaRecursion(n / 10, s);
	else
	{
		i = 0;
		if (n < 0)
			s[i++] = '-';
	}

	if (n < 0)
	{
		n = -n;
	}

	s[i++] = (n) % 10 + '0';

	s[i] = '\0';
}

void printd(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		printd(n / 10);
	}
	putchar(n % 10 + '0');
}